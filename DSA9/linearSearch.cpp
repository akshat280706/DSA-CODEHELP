// // LINEAR SEARCH:

// #include <iostream>
// using namespace std;
// bool tosearch(int arr[], int size, int key){
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i]==key)
//         {
//             return 1;
//         }
//     }
//     return 0;
// }
// int main(){
//     int size;
//     cout << "Enter the size of the array: " << endl;
//     cin >> size;
//     int arr[100];
//     cout << "enter " << size << " elements of the array: "<<endl;
//     for (int i = 0; i < size; i++)
//     {
//         cin >> arr[i];
//     }
//     int key;
//     cout << "Enter the element to search for: " << endl;
//     cin >> key;

//     bool found = tosearch(arr, size, key);
//     if (found)
//     {
//         cout << "The key is present" << endl;
//     }else{
//         cout << "key is not present" << endl;
//     }
//     return 0;
// }


// To check key is present at what index:

#include <iostream>
using namespace std;
int tosearch(int arr[], int size, int key){
    for (int i = 0; i < size; i++)
    {
        if (arr[i]==key)
        {
            return i; //returns the index
        }
    }
    return -1; //return -1 if not found
    //using -1 as 0 is is a valid index (first element). 
    // So if the key isn’t found, the program will think the element is at index 0.
}
int main(){
    int size;
    cout << "Enter the size of the array: " << endl;
    cin >> size;
    int arr[100];
    cout << "enter " << size << " elements of the array: "<<endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int key;
    cout << "Enter the element to search for: " << endl;
    cin >> key;

    int found = tosearch(arr, size, key);
    if (found)
    {
        cout << "The element "<< key <<" is present at index: " << found << endl;
    }else{
        cout << "key is not present" << endl;
    }
    return 0;
}