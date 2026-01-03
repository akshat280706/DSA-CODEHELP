// #include<iostream>
// using namespace std;

// void leftRotateArray(int arr[], int n, int d){
//     //d is the number of times to be rotated to
//     //n is the total size of the array
//     d = d % n;
//     int temp[d];
//     //storing
//     for (int i = 0; i < d; i++)
//     {
//         temp[i] = arr[i];
//     }
//     //shifting
//     for (int i = d; i <n; i++)
//     {
//         arr[i - d] = arr[i];
//     }
//     //storing temp to original array
//     for(int i = n - d; i < n; i++){
//         arr[i] = temp[i - (n - d)];
//     }
// }
//     int main()
// {
//     int n;
//     cout << "Enter the number of elements of the array: ";
//     cin >> n;
//     int arr[n];
//     cout << "Enter " << n << " elements of the array: " << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     int d;
//     cout << "Enter the number for the array to be left shifted to: ";
//     cin >> d;
//     cout << "The new left shifted array is: ";
//     leftRotateArray(arr, n, d);
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << "";
//     }
//     cout << endl;
    
//     return 0;
// }


//now optimal approach
// #include <iostream>
// #include<algorithm>
// using namespace std;

// void leftRotate(int arr[], int n, int d){
//     d = d % n;
//     reverse(arr, arr + d);
//     reverse(arr + d, arr + n);
//     reverse(arr, arr + n);
// }

// int main(){
//     int n;
//     cout << "Enter the number of elements of the array: ";
//     cin >> n;
//     int arr[n];
//     cout << "Enter " << n << " elements of the array: " << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     int d;
//     cout << "Enter the number for the array to be left shifted to: ";
//     cin >> d;
//     cout << "The new left shifted array is: ";
//     leftRotate(arr, n, d);
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }

//optimal using vectors
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
void leftRotate(vector<int>&arr, int d){
    int n = arr.size();
    d = d % n;

    reverse(arr.begin(), arr.begin() + d);
    reverse(arr.begin() + d, arr.begin() + n);
    reverse(arr.begin(), arr.begin() + n);
}
int main(){
    int n;
    cout << "enter the number of elements of an array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "enter " << n << " elements of the array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int d;
    cout << "enter the value to be shifted to: ";
    cin >> d;
    leftRotate(arr, d);
    cout << "the left shifted array is: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}