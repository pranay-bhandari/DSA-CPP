#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    int i, j;

    // for (i = 1; i < n; i++)
    for (i = 0; i < n - 1; i++)
    {
        bool swapped = false;
        // for (j = 0; j < n - i; j++)
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        if (swapped == false)
        {
            // already sorted
            break;
        }
        
    }
}

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int n;
    cout << "enter the size of array: ";
    cin >>n;
    cout << endl;

    int arr[100];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    // int arr[] = { 64, 25, 12, 22, 11 };
    // int n = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr, n);
    cout << "Sorted array: ";
    printArray(arr, n);
    return 0;
}
