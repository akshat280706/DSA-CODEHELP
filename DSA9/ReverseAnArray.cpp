// To reverse an array
#include<iostream>
using namespace std;

void reverse(int arr[], int n){
    int start = 0;
    int end=n-1;

    while (start<=end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
void printArr(int arr[], int n){
    cout << endl;
    cout << "The reversed array is: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main(){

    int arr5[5]={1,5,3,10,9};
    int arr6[6] = {5, 3, 9, 0, -2, 4};

    reverse(arr5, 5);
    reverse(arr6, 6);

    printArr(arr5, 5);
    printArr(arr6, 6);
    return 0;
}