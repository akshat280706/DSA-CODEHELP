#include <bits/stdc++.h>
using namespace std;

int search(vector<int>& nums, int n, int target){
    int left = 0;
    int right = n - 1;
    while(left<=right){
        int mid = left + (right - left) / 2;
        if(nums[mid]==target){
            return mid;
        }
        if(nums[left]<=nums[mid]){
            if(nums[left]<=target && target<=nums[mid]){
                right = mid - 1;
            }
            else{
                left = mid + 1;
            }
        }
        else{
            if(nums[mid]<=target && target<=nums[right]){
                left = mid + 1;
            }else{
                right = mid - 1;
            }
        }
    }
    return -1;
}

int main(){
    int n;
    cout << "enter the size of the array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "enter " << n << " elements of the array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    int target;
    cout << "enter the target elements: ";
    cin >> target;

    int ans = search(nums, n, target);
    cout << "the ans is: " << ans;

    return 0;
}