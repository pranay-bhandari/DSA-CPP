#include<iostream>
using namespace std;

// int main()
// {

//     int num = 1 , /*ch = '1'*/ ch ='a';
//     cout << endl;

//     switch (num){
//     case 1: cout << "First" << endl;
//             cout << "First Again" << endl;
//         break;
    
//     case '1': cout << "character one" << endl;
//         break;

//     default: cout << "this is the default case" << endl;
//         break;
//     }

//  return 0;
// }



// int main()
// {

//     int num = 1 , ch = '1';
//     cout << endl;

//     switch (ch){
//     case 1: cout << "First" << endl;
//             cout << "First Again" << endl;
//         break;
    
//     case '1': switch(num){
//                 case 1: cout << "value of num is: " << num << endl;
//                 break;
//     }
//         break;

//     default: cout << "this is the default case" << endl;
//         break;
//     }

//     cout << endl;

//  return 0;
// }



int main()
{

    int num = 1 , ch = '1';
    cout << endl;

    switch (2 * num){
    case 2: cout << "First" << endl;
            cout << "First Again" << endl;
        break;
    
    case '1': switch(num){
                case 1: cout << "value of num is: " << num << endl;
                break;
    }
        break;

    default: cout << "this is the default case" << endl;
        break;
    }

    cout << endl;

 return 0;
}