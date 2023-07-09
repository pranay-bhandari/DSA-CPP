#include <iostream>
using namespace std;

bool search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int arr[10] = {5, 7, -2, 10, 22, -2, 0, 5, 22, 1};

    int element;
    cout << "enter the element to search for: ";
    cin >> element;

    bool found = search(arr, 10, element);

    if (found)
    {
        cout << element << " is present in the list" << endl;
    }

    else
    {
        cout << element << " is notpresent in the list" << endl;
    }

    return 0;
}