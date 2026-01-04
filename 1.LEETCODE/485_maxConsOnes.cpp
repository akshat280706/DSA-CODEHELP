#include<iostream>
#include<vector>
using namespace std;

int MaxConsecutiveOnes(vector<int>&arr){
    int n = arr.size();
    int maxi = 0;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==1){
            cnt++;
            maxi = max(maxi, cnt);
        }
        else{
            cnt = 0;
        }
    }
    return maxi;
}

int main(){
    int n;
    cout<<"enter the number of elements of the array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "enter " << n << " elements of the array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "The maximum consecutive ones are: " << MaxConsecutiveOnes(arr) << endl;
    return 0;
}