#include <iostream>
using namespace std;

int nFib(int n)
{
    int a = 0, b = 1, nxt;

    if (n == 0)
    {
        char ch = 33;
        cout << ch;
        return ch;
    }

    if (n == 1)
    {
        return a;
    }

    for (int i = 3; i <= n; i++)
    {
        nxt = a + b;
        a = b;
        b = nxt;
    }
    return b;
}

int main()
{
    int n;
    cout << "Enter the nth term : ";
    cin >> n;

    if (n == 0)
    {
        char ans = nFib(n);
        cout << "The nth term for fibonnaci series is : " << ans << endl;
    }

    else
    {
        cout << "The nth term for fibonnaci series is : " << nFib(n) << endl;
    }

    return 0;
}