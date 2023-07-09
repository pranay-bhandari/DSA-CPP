#include<iostream>
#include<stack>
using namespace std;

// last in first out

int main()
{
    stack <string> s;

    s.push("Pranay");
    s.push("Bhandari");
    s.push("Jain");

    cout << "top element: " << s.top() << endl;
    s.pop();
    cout << "top element: " << s.top() << endl;

    cout << "size of stack: " << s.size() << endl;

    cout << "empty or not: " << s.empty() << endl;

    return 0;
}