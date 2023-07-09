#include <iostream>
using namespace std;

void swapAdjacent(int arr[], int n)
{
    for (int i = 0; i < n; i += 2)
    {
        if (i + 1 < n)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int even[8] = {5, 2, 9, 4, 7, 6, 1, 0};
    int odd[5] = {11, 33, 9, 76, 43};
    
    swapAdjacent(even, 8);
    swapAdjacent(odd, 5);
    
    printArray(even, 8);
    printArray(odd, 5);

    return 0;
}