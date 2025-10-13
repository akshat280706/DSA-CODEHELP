#include<iostream>
using namespace std;

void selectionSort(int arr[], int n){
    for (int i = 0; i < n-1; i++)
    {
        int minIndex = i;
        for (int j = i+1; j < n; j++)
        {
            if (arr[j]<arr[minIndex])
                minIndex = j;
                swap(arr[i], arr[minIndex]);
        }
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
    cout << "enter the number of elements nedded in the array" << endl;
    cin >> n;

    int arr[n];
    cout << "enter the elements of the array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "the original array is: ";
    printArray(arr, n);

    selectionSort(arr, n);
    cout << "the sorted array is: ";
    printArray(arr, n);

    return 0;
}