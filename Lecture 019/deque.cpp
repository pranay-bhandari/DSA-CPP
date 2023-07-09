#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque <int> d;

    d.push_back(1);
    d.push_front(2);

    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;

    // d.pop_back();
    // for (int i : d)
    // {
    //     cout << i << " ";
    // }
    // cout << endl;

    cout << "print first index element: " << d.at(1) << endl;

    cout << "front element: " << d.front() << endl;
    cout << "back element: " << d.back() << endl;

    cout << "empty or not: " << d.empty() << endl;

    cout << "before erasing: " << d.size() << endl;
    d.erase(d.begin(), d.begin() + 1);
    cout << "after erasing: " << d.size() << endl;
}