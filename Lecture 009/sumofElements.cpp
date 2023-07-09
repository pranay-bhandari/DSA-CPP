#include <iostream>
using namespace std;

int sumofElements(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = arr[i] + sum;
    }

    return sum;
}

int main()
{
    int size;
    cin >> size;

    int arr[100];
    cout << "enter the elements: ";
    for (int i = 0; i < size; i++)
    {

        cin >> arr[i];
    }

    cout << " the sum of elements of an array are: " << sumofElements(arr, size) << endl;
    return 0;
}