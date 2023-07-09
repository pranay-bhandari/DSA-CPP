#include <iostream>
#include <vector>
using namespace std;

vector<int> rotate(vector<int>& v, int k)
{
    vector<int> temp(v.size());

    for (int i = 0; i < v.size(); i++)
    {
        temp[(i + k) % v.size()] = v[i];
    }
    
    v = temp;
}

void print(vector<int> v)
{

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> v;
    v.push_back(11);
    v.push_back(7);
    v.push_back(3);
    v.push_back(12);
    v.push_back(4);

    vector<int> ans = rotate(v,2);

    cout << "Printing the rotated array" << endl;
    print(ans);

    return 0;
}