#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int maxSubArray(vector<int>&nums){
    int sum=0;
    int maxi = nums[0];
    for (int i = 0; i < nums.size(); i++)
    {
        sum += nums[i];
        maxi = max(maxi, sum);
         if(sum<0){
        sum = 0;
    }
    }
    return maxi;
}

int main(){
    int n;
    cout << "enter the number of elements of the array: ";
    cin >> n;
    vector<int> nums(n);
    cout << "enter " << n << " elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> nums[i];
    }

    cout << "the max SubArray Sum is: " << maxSubArray(nums) << endl;
    return 0;
}
