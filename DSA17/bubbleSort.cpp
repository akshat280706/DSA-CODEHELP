//round1---> 1st laergest element goes onto its original poition
//round2--> 2nd largest goes onto its original position(2ndlast position)
//total n-1 rounds

#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n){
    for (int i = 1; i < n-1; i++)
    {
        bool swapped = false;
        for (int j = 0; j < n-i; j++)
        {
            if (arr[j]>arr[j+1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped==false)
        {
            break;
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
    cout << "enter the number of elements of the array: " << endl;
    cin>>n;
    int arr[n];
    cout << "enter the elements to sort: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "The original array is: ";
    printArray(arr, n);

    bubbleSort(arr, n);
    cout << "the sorted array is: ";
    printArray(arr, n);
    return 0;
}
