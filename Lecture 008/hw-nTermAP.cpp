#include <iostream>
using namespace std;

float nthAP(float a, float d, int n)
{
    return (a + (n - 1) * d);
}

int main()
{
    float a, d;
    cout << "enter a and d: ";
    cin >> a >> d;

    int n;
    cout << "enter n term: ";
    cin >> n;

    cout << "The " << n << " term of the AP is : " << nthAP(a,d,n) << endl;

    return 0;
}