// #include <iostream>
// using namespace std;

// void moveZeros(int arr[], int n)
// {
//     int i = -1;
//     //finding the first zero
//     for (int j = 0; j < n; j++)
//     {
//         if (arr[j]==0)
//         {
//             i = j;
//             break;
//         }

//     }
//     //no zero found
//     if (i==-1){
//         return;
//     }
//     for (int j = i+1; j < n; j++)
//     {
//         if (arr[j]!=0)
//         {
//             swap(arr[j], arr[i]);
//              i++;
//         }
//     }
// }
// int main(){
//     int n;
//     cout << "enter the no of elements of the array: ";
//     cin >> n;
//     cout << endl;
//     int arr[10000];
//     cout << "enter " << n << " elements of the array: " << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     cout << endl;
//     moveZeros(arr, n);
//     cout << "the new array is: " << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }

#include <iostream>
#include <vector>
using namespace std;

void moveZeros(vector<int>&arr, int n)
{
    int i = -1;
    //finding the first zero
    for (int j = 0; j < n; j++)
    {
        if (arr[j]==0)
        {
            i = j;
            break;
        }
        
    }
    //no zero found
    if (i==-1){
        return;
    }
    for (int j = i+1; j < n; j++)
    {
        if (arr[j]!=0)
        {
            swap(arr[j], arr[i]);
            i++;
        }
    }
}
int main(){
    int n;
    cout << "enter the no of elements of the array: ";
    cin >> n;
    cout << endl;
    vector<int> arr(n);
    cout << "enter " << n << " elements of the array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << endl;
    moveZeros(arr, n);
    cout << "the new array is: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}