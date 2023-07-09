#include <iostream>
#include <climits>
using namespace std;

int getMin(int num[], int n)
{

    int mini = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        mini = min(mini, (num[i]));
        // if (num[i] < min)
        // {
        //     min = num[i];
        // }
    }

    return mini;
}

int getMax(int num[], int n)
{

    int maxi = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi, (num[i]));
        // if (num[i] > max)
        // {
        //     max = num[i];
        // }
    }

    return maxi;
}

int main()
{
    // gatiya practice
    // int size;
    // cin >> size;
    // int num[size]

    int size;
    cin >> size;

    int num[100];
    // taking input in array
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }

    cout << "the max value is : " << getMax(num, size) << endl;
    cout << "the min value is : " << getMin(num, size) << endl;

    return 0;
}