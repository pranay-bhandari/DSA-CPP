#include <iostream>
using namespace std;

int sum(int arr[], int n, int a)
{
    int sum = 0;

    for (int i = a; i < n; i++)
    {
        sum = sum + arr[i];
    }

    return sum;
}

int pivot(int arr[], int n)
{
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;

    if (sum(arr, mid - 1, s) == sum(arr, e, mid + 1))
    {
        return mid;
    }
    else if (sum(arr, mid - 1, s) < sum(arr, e, mid + 1))
    {
        mid = mid + 1;
    }
    
}

int main()
{
    int arr[6] = {1, 7, 3, 6, 5, 6};
    cout << "" << pivot(arr, 6) << endl;

    return 0;
}