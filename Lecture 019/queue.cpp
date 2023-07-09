#include<iostream>
#include<queue>
using namespace std;

// first in first out

int main()
{
    queue <string> q;

    q.push("Pranay");
    q.push("Bhandari");
    q.push("Jain");

    cout << "size before: " << q.size() << endl;
    cout << "first element: " << q.front() << endl;
    q.pop();
    cout << "first element: " << q.front() << endl;

    cout << "size after: " << q.size() << endl;

    cout << "empty or not: " << q.empty() << endl;
    return 0;
}