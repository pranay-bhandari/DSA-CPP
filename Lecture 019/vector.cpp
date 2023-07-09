#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // capacity mtlb kitni memory isko assign hui hai
    // size ka mtlb kitne elements isme pade hue hai
    vector<int> v;

    vector<int> a(5, 1); // 5 size ka vector or sare elements 1 se initialize
    cout << "print a: " << endl;
    for (int i : a)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "capacity of vector: " << v.capacity() << endl;

    v.push_back(1);
    cout << "capacity of vector: " << v.capacity() << endl;

    v.push_back(2);
    cout << "capacity of vector: " << v.capacity() << endl;

    v.push_back(3);
    cout << "capacity of vector: " << v.capacity() << endl;
    cout << "size of vector: " << v.size() << endl;

    cout << "element at 2nd index: " << v.at(2) << endl;

    cout << "first element: " << v.front() << endl;
    cout << "last element: " << v.back() << endl;

    cout << "before pop" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    v.pop_back();

    cout << "after pop" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "befor clear size " << v.size() << endl;
    v.clear();
    cout << "after clear size " << v.size() << endl;

    vector<int> last(a);
    cout << "print last: " << endl;
    for (int i : a)
    {
        cout << i << " ";
    }
    cout << endl;
}