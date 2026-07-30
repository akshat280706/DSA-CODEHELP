#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// vector<int>kMRU(vector<int>& nums, int k){

//     int n=nums.size();
//     k = k % n;
//     int indx = k;
//     int temp = nums[indx];
//     for (int i = indx; i > 0;i--){
//         nums[i] = nums[i - 1];
//     }
//         nums[0] = temp;
//     return nums;
// }

// int main() {
//     int n;
//     cout << "Enter n: ";
//     cin >> n;

//     vector<int> arr(n);

//     cout << "Enter " << n << " elements: ";
//     for (int i = 0; i < n; i++)
//         cin >> arr[i];

//     int k;
//     cout << "Enter k: ";
//     cin >> k;

//     vector<int> ans = kMRU(arr, k);

//     cout << "Result: ";
//     for (int x : ans)
//         cout << x << " ";
//     cout << endl;

//     return 0;
// }