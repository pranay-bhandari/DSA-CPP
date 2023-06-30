#include<iostream>
using namespace std;

int main()
{
/*
    int n, i=1;
    cout << "enter the value of n: ";
    cin >> n;

    while(i <= n){

        //cout << i << endl;
        cout << i << " ";
        i = i+1;
    }
   

   int n, i=1, sum=0;
    cout << "enter the value of n: ";
    cin >> n;

    while(i <= n){

        //cout << i << endl;
        sum = sum +i;
        i = i+1;
    }

    cout << "value of sum is :" << sum ;



int n, i=2, sum=0;
    cout << "enter the value of n : ";
    cin >> n;

    while(i <= n){

        if (i%2==0)
        {
            sum = sum +i;
        }
        i = i+1;
    }

    cout << "value of sum is :" << sum ;

 return 0;

 */

int n,i=2;

cin >> n;

while(i<n){
    if(n%i==0){
        cout << "not prime for " << i << endl;

    }
    else{
        cout << "prime for " << i << endl;
    }
    i=i+1;
}

 

}