#include<iostream>
using namespace std;

int getPivot(int arr[], int n){
    int start=0;
    int end = n - 1;
    int mid = start + (end - start) / 2;

    while(start<end){
        if (arr[mid]>=arr[0])
        {
            start = mid + 1;
        }else{
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return start; //or return end
}
    int main(){
        int arr[5]={8, 10, 17, 1, 3};
        cout << "case 1: " << endl;
        cout << "The pivot element is at index : " << getPivot(arr, 5) << endl;

        int arr2[8]={ 4, 8, 9, 10, 17, 18, 2, 3};
        cout << "case 2: " << endl;
        cout << "The pivot element is at index : " << getPivot(arr2, 8) << endl;
        return 0;
}
