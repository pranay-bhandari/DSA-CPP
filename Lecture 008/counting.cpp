#include <iostream>
using namespace std;

void counting(int n)
{
    for (int i = 0; i <= n; i++)
    {
        cout << i << " ";
    }
    cout << endl;
    // return ; void type mai kuch return nhi hota hai but return statement use kr skte hai kyunki vo kuch value nhi
    // return kr rha hai bas vahan se return kr rha hai
}

int main()
{
    int n;
    cin >> n;
    counting(n);
}