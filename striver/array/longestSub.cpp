// ///Given an array nums of size n and an integer k, 
// ///find the length of the longest sub-array that sums to k.
// ///If no such sub-array exists, return 0.///

// #include<iostream>
// #include<vector>
// using namespace std;

// int longestSubArray(vector<int>&arr, int k){
//     int n = arr.size();
//     int maxi=0;
//     for (int startIndex = 0; startIndex < n; startIndex++){
//         for (int endIndex = startIndex; endIndex < n; endIndex++){
//             int sum = 0;
//             for (int i = startIndex; i <= endIndex; i++){
//                 sum += arr[i];
//             }
//                 if (sum==k){
//                     maxi = max(maxi, endIndex - startIndex + 1);
//                 }
//         }      
//     }
//     return maxi;
// }

// int main(){
//     int n;
//     cout<<"enter the size of the array: ";
//     cin >> n;

//     vector<int> arr(n);
//     cout << "enter " << n << " numbers of the array: " << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int k;
//     cout << "enter the value of k:" << endl;
//     cin >> k;
//     cout << "the ans is: " << longestSubArray(arr, k) << endl;
//     return 0;
// }
