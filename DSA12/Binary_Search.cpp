// // only on monotonic fxns(might be increasing or decreasing)

// #include<iostream>
// using namespace std;
// int BinarySearch(int arr[], int size, int key){
//     int start = 0;
//     int end = size - 1;
//     int mid=(start+end)/2;

//     while (start<=end)
//     {
//         if (arr[mid]==key)
//         {
//             return mid;
//         }
        
//         //go to right wala part
//         if (arr[mid]<key)
//         {
//             start = mid + 1;
//         }
//         //go to left wala part
//         else{
//             end = mid - 1;
//         }
//         mid = (start + end) / 2;
//     }
//     return -1;
// }

// int main(){

//     int EvenArr[6] = {2, 4, 6, 8, 10, 12};
//     int ODDArr[6] = {2, 4, 6, 8, 10};

//     int Evenindex = BinarySearch(EvenArr, 6, 8);
//     int Oddindex = BinarySearch(ODDArr, 5, 8);

//     cout << "the index of 8 is " << Evenindex << endl;
//     return 0;
// }




// Optimized code:
// we are chaning the mid as incase if size of start is 2^31 -1 and end's size is also this,
// then on adding them in mid, the range would go out of the range of n and so it would
// give an error, thus we are subtracting it(keeping the logic same (s+e)/2)



// #include<iostream>
// using namespace std;
// int BinarySearch(int arr[], int size, int key){
//     int start = 0;
//     int end=size-1;
//     int mid = start + (end - start) / 2;

//     while (start<=end)
//     {
//         if (arr[mid]==key)
//         {
//             return mid;
//         }
//         if (arr[mid]<key)
//         {
//             start = mid + 1;
//         }
//         else{
//             end = mid - 1;
//         }
//         mid = start + (end - start) / 2;
//     }
//     return -1;
// }
// int main(){
//     int size;
//     cout << "Enter the size of the array: " << endl;
//     cin >> size;

//     int arr[1000];
//     cout << "enter " << size << " elements of the array: "<<endl;
//     for (int i = 0; i < size; i++)
//     {
//         cin >> arr[i];
//     }
    
//     int key;
//     cout << "enter the key to be searched for: " << endl;
//     cin >> key;

//     int result = BinarySearch(arr, size, key);
//     if (result!=-1)
//     {
//         cout << "Element " << key << " found at index: " << result << endl;
//     }else{
//         cout << "Element " << key << " not found at any index" << endl;
//     }
    
//     return 0;
// }



// NOW TO CHECK IF THE USER HAS INPUT IN MONOTONIC ORDER ONLY
#include<iostream>
using namespace std;
int BinarySearch(int arr[], int size, int key){
    int start = 0;
    int end=size-1;
    int mid = start + (end - start) / 2;

    while (start<=end)
    {
        if (arr[mid]==key)
        {
            return mid;
        }
        if (arr[mid]<key)
        {
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}

bool IsSortedIncreasingOder(int arr[],int size){
    for (int i = 0; i < size-1; i++)
    {
        if (arr[i]>arr[i+1])
        {
            return false;
        }
    }
    return true;
}

bool IsSortedDecreasingOder(int arr[],int size){
    for (int i = 0; i < size-1; i++)
    {
        if (arr[i]<arr[i+1])
        {
            return false;
        }
    }
    return true;
}

int main(){
    int size;
    cout << "Enter the size of the array: " << endl;
    cin >> size;

    int arr[1000];
    cout << "enter " << size << " elements of the array: "<<endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    if (!IsSortedIncreasingOder(arr,size) || IsSortedDecreasingOder(arr,size))
    {
        cout << "Error!, The array is not sorted in Monotonic Order" << endl;
        return 1;//exxit the program
    }

    int key;
    cout << "enter the key to be searched for: " << endl;
    cin >> key;

    int result = BinarySearch(arr, size, key);
    if (result!=-1)
    {
        cout << "Element " << key << " found at index: " << result << endl;
    }else{
        cout << "Element " << key << " not found at any index" << endl;
    }
    
    return 0;
}