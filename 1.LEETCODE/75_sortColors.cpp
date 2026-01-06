//dutch national flag method:
#include<iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;

void sortColors(vector<int>&nums){
    int low=0;
    int mid = 0;
    int high = nums.size() - 1;
    while (mid<=high){
        if(nums[mid]==0){
            swap(nums[low], nums[mid]);
            low++;
            mid++;
        }
        else if(nums[mid]==1){
            mid++;
        }
        else{
            swap(nums[mid], nums[high]);
            high--;
        }
    }
}

int main(){
    int n;
    cout << "enter the size of the array needed: ";
    cin >> n;


    vector<int> nums(n);
    cout << "enter " << n << " elements of the array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    sortColors(nums);
    cout << "the sorted array is: ";
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
    return 0;
}