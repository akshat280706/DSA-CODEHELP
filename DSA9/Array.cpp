// array---> similar type of items(same data type)
// we can store multiple values in a single variable

// implementatipn--> int a[5]; (just an example)
// indexing starts from 0
// eg in the 4th index, 5th location would be stored
// if n size array then index would go from 0 to (n-1)

// initialization:
// int number[3]={1,6,9}

// initializing all elements to a single value

// i) with 0(directly)
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5] = {0};
//     cout << "The elements of the array are: " << endl;
//     for (int i = 0; i < 5; i++)
//     {
//         cout << arr[i]<<" ";
//     }
//     return 0;
// }

// ii)with some other number:
// #include<iostream>
// using namespace std;
// int main(){

//     int arr1[5] = {10};
//     cout << "the elements of the array are: " << endl;
//     for (int i = 0; i < 5; i++)
//     {
//         cout << arr1[i] << " ";
//     }
//     cout << endl;

//     int arr2[5]={};
//     cout << "The elements of the array are: " << endl;
//     for (int i = 0; i < 5; i++)
//     {
//         arr2[i] = 10;
//         cout << arr2[i] << " ";
//     }
//     return 0;
// }


// should be accessed within its size
// #include<iostream>
// using namespace std;
// int main(){

//     int number[15];
//     //accessing random values of array
//     cout << endl;
//     cout << "the value at 0th index is: " << number[0] << endl;
//     cout << "the value at 14th index is: " << number[14] << endl;
//     // cout << "the value at 20th index is: " << number[20] << endl;//error
//     cout << endl;

//     //initializing
//     int second[3]={4,7,8};
//     cout << "the value at second index is: " << second[2] << endl;
//     cout << endl;
//     cout << "everything is fine and code is working properly" << endl;
//     return 0;
// }

