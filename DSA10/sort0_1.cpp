#include<iostream>
using namespace std;

void printArray(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
    }
    cout << endl;
}

void sortArray(int arr[], int n){
    int left=0;
    int right = n - 1;
    while (left<right)
    {
        while (arr[left]==0)
        {
            left++;
        }
        while (arr[right==1])
        {
            right--;
        }
        // idhar ab arr[i]==1 and arr[j]==0
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
    
}

int main(){
    int arr[8]={0,0,1,0,1,1,0,0};
    sortArray(arr,8);
    printArray(arr, 8);
    return 0;
}