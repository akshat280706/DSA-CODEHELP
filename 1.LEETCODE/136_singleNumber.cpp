#include<iostream>
#include<vector>
using namespace std;

int singleNumber(vector<int>&nums){
    int ans = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        ans = ans ^ nums[i];
    }
    return ans;
}

int main(){
    int n;
    cout << "enter the size of the array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "enter " << n << " elements of the array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    int number= singleNumber(nums);
    cout << "the number is: " << number;
    return 0;
}