// //print subseq whose sum is k
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// void printSum(int indx, vector<int>&current, int numSum, int k, vector<int>& initialArr, int n){
//     if(indx==n){
//         if(numSum==k){
//             for(auto it: current){
//                 cout << it << " ";
//             }
//             cout << endl;
//         }
//         return;
//     }
//     current.push_back(initialArr[indx]);
//     numSum += initialArr[indx];
//     printSum(indx + 1, current, numSum, k, initialArr, n);
//     numSum-=initialArr[indx];
//     current.pop_back();

//     // do not consider
//     printSum(indx + 1, current, numSum, k, initialArr, n);
// }
// int main(){
//     int n;
//     cout << "enter the value of n: ";
//     cin>>n;
//     vector<int>initialArr(n);
//     cout << "enter " << n << " elements of the array: ";
//     cout << endl;
//     for (int i = 0; i <n; i++)
//     {
//         cin >> initialArr[i];
//     }
//     int k;
//     cout<<"enter the value of k: ";
//     cin >> k;
//     vector<int> current;
//     printSum(0, current, 0, k, initialArr, n);
//     return 0;
// }

