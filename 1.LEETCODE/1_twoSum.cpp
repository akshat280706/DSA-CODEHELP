#include<iostream>
#include <bits/stdc++.h>
#include<vector>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>> v;
        for(int i=0; i<nums.size(); i++){
            v.push_back({nums[i],i});
        }
        sort(v.begin(), v.end());
        int leftIndx=0;
        int rightIndx=v.size()-1;
        while(leftIndx<rightIndx){
            int sum= v[leftIndx].first + v[rightIndx].first;
            if(sum==target){
                return {v[leftIndx].second, v[rightIndx].second};
            }
            else if(sum<target){
                leftIndx++;
            }
            else{
                rightIndx--;
            }
        }
        return {-1,-1};
    }

int main(){
    int n;
    cout << "enter the size of the array:";
    cin >> n;
    vector<int> nums(n);
    cout << "enter " << n << " elments of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    int target;
    cout << "enter the target number: " << endl;
    cin >> target;
    vector<int> result = twoSum(nums, target);
    cout << "indices are: " << result[0] << " " << result[1];
    return 0;
}
