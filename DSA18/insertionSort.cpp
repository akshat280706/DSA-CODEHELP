#include<iostream>
using namespace std;

void insertionSort(int arr[], int n){
    for (int i = 1; i < n; i++)
    {
        int temp=arr[i];
        int j = i - 1;
        while (j>=0 && arr[j]>temp)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = temp;
    }
    
}
void printArray(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int n;
    cout << "enter the number of elements nedded for the array: " << endl;
    cin >> n;

    int arr[n];
    cout << "enter the elements of the array needed to be sorted: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "The original array is: " << endl;
    printArray(arr, n);

    insertionSort(arr,n);
    cout << "the sorted array is: " << endl;
    printArray(arr, n);

    return 0;
}