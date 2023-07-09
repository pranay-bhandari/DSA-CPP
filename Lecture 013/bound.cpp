#include <iostream>
using namespace std;

int firstOcc(int arr[], int n, int key)
{

    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1; // ans = 0 / ans; kuch bhi chalta sir ek variable initialise kiya hai store krne ke liye yahan -1 issliye dala kyunki
                // jab match na ho toh -1 ana chahiye vo return krna padhta toh ans mai hi dal diya
    while (s <= e)
    {

        if (arr[mid] == key)
        {
            ans = mid;
            e = mid - 1;
            // return ans;
        }
        else if (key > arr[mid])
        { // Right me jao
            s = mid + 1;
        }
        else if (key < arr[mid])
        { // left me jao
            e = mid - 1;
        }

        mid = s + (e - s) / 2;
    }
    return ans;
    // return -1;
}

int lastOcc(int arr[], int n, int key)
{

    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {

        if (arr[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (key > arr[mid])
        { // Right me jao
            s = mid + 1;
        }
        else if (key < arr[mid])
        { // left me jao
            e = mid - 1;
        }

        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    int odd[5] = {1, 2, 3, 3, 5};
    cout << "First occurrence of 3 is at index " << firstOcc(odd, 5, 3) << endl;
    cout << "Last occurrence of 3 is at index " << lastOcc(odd, 5, 3) << endl;
    cout << "Total no. of occurrence's of 3 is " << (lastOcc(odd, 5, 3) - firstOcc(odd, 5, 3)) + 1 << endl;

    return 0;
}