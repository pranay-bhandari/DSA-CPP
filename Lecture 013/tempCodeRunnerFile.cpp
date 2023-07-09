int pvot(int arr[], int n, int key)
// {

//     int s = 0, e = n - 1;
//     int mid = s + (e - s) / 2;
    
//     while (s <= e)
//     {

//         if (arr[mid] == key)
//         {
//             ans = mid;
//             e = mid - 1;
//             // return ans;
//         }
//         else if (key > arr[mid])
//         { // Right me jao
//             s = mid + 1;
//         }
//         else if (key < arr[mid])
//         { // left me jao
//             e = mid - 1;
//         }

//         mid = s + (e - s) / 2;
//     }
//     return ans;
//     // return -1;
// }