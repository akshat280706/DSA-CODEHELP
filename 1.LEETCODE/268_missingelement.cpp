#include<iostream>
#include<vector>
using namespace std;

//method 1:
int missingElement(vector<int>& arr, int n){
    int sum = (n * (n + 1)) / 2;
    int s2 = 0;
    for (int i = 0; i < n; i++)
    {
        s2 += arr[i];
    }
    return sum - s2;
}
int main(){
    int n;
    cout << "enter the number of elements of the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elments of the array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << endl;
    int ans= missingElement(arr, n);
    cout << "the missing elments is: " << ans << endl;
    return 0;
}