//print all subsequence of an array:
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void generate(int ind, vector<int>& current, vector<int>&arr, int n){
    if(ind==n){
        for(auto it:current){
            cout << it << " ";
        }
        if(current.size()==0){
            cout << "{}";
        }
        cout << endl;
        return;
    }

    //take the element
    current.push_back(arr[ind]);
    generate(ind+1, current, arr, n);
    current.pop_back();

    //do not want to take the element
    generate(ind + 1, current, arr, n);
}

int main(){
    int n;
    cout << "enter the value of n: ";
    cin >> n;
    vector<int> arr(n);
    cout << "enter " << n << " value of the array: ";
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    vector<int> current;
    cout << "the subsequence of the array are: "<<endl;
    generate(0, current, arr, n);
    return 0;
}