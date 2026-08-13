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








// int newSum(vector<int>nums){
//     unordered_set<int> st;
//     int sum = 0;
//     for (int i = 0; i < nums.size();i++){
//         while(st.count(nums[i])) nums[i]++;
//         st.insert(nums[i]);
//         sum += nums[i];
//     }
//     return sum;
// }
// int main() {
//     int n;
//     cout << "Enter n: ";
//     cin >> n;

//     vector<int> arr(n);

//     cout << "Enter " << n << " elements: ";
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     int ans = newSum(arr);

//     cout << "Result: " << ans << endl;

//     return 0;
// }


// #include <iostream>
// #include<bits/stdc++.h>
// #include <vector>
// using namespace std;

// vector<int> findTwoElement(vector<int>& arr) {
//     vector<int>ans;
//     sort(arr.begin(),arr.end());
//     for(int i=0;i<arr.size()-1;i++){
//         if(arr[i]==arr[i+1]) ans.push_back(arr[i]);
//     }
//     for(int i=1;i<arr.size();i++){
//         if(arr[i]-arr[i-1]==2) ans.push_back(arr[i]-1);
//     }
//     return ans;
// }
// int main() {
//     vector<int> arr = {3, 1, 3};
//     vector<int> ans = findTwoElement(arr);
//     cout << ans[0] << " " << ans[1] << endl;
//     return 0;
// }





// #include <iostream>
// #include<bits/stdc++.h>
// #include <vector>
// using namespace std;

// vector<int> idk(vector<int>& arr) {
//     sort(arr.begin(), arr.end());
//     vector<int> ans;
//     for (int i = 1;i<arr.size();i+=2){
//         ans.push_back(arr[i] + arr[i - 1]);
//     }
//     return ans;
// }
// int main() {
//     vector<int> arr = {123, 331, 23, 90, 15, 61};

//     vector<int> ans = idk(arr);
//     for (int x : ans) {
//         cout << x << " ";
//     }
//     cout << endl;
//     return 0;
// }