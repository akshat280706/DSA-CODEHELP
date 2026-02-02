// // hashmap
// //map--> o(logn)
// // unordered map--> o(1)

// // <key,value>


// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     //creating
//     unordered_map<string, int> m;

//     //insertion
//     //1
//     pair<string, int> p = make_pair("akshat", 3);
//     m.insert(p);

//     //2
//     pair<string, int> pair2("mera", 4);
//     m.insert(pair2);

//     //3
//     m["why"] = 1;

//     //m["why"]=2 ---> will update 1 to 2


//     //searching
//     cout << m["why"] << endl;
//     cout << m.at("akshat") << endl;
//     // cout << m.at("unkowing checking") << endl; //will give error
//     cout << m["unknown chrcking"] << endl;//will create an entry as unknon checking
//     cout << m.size() << endl;

//     //to check prescence
//     cout << m.count("bro") << endl;
//     cout << m.count("akshat") << endl;


//     //to erase
//     m.erase("akshat");
//     cout << m.size() << endl;

//     for(auto i:m){
//         cout << i.first << " " << i.second << endl;
//     }

//     cout << endl;
//     //iterator
//     unordered_map<string,int> :: iterator it=m.begin();
//     while(it!=m.end()){
//         cout << it->first << " " << it->second << endl;
//         it++;
//     }

    
//     return 0;
// }


#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int maxFreq(vector<int> &arr, int n){
    // unordered_map<int, int> count;
    // for(int i=0; i<arr.size; i++){
    //     count[arr[i]]++;
    // }

    // int maxi=INT_MIN;
    // int ans = -1;
    // for(auto i:count){
    //     if(i.second>maxi){
    //         maxi = i.second;
    //         ans = i.first;
    //     }
    // }

//     unordered_map<int, int> count;
//     int maxFreq = 0;
//     int maxAns = 0;

//     for (int i = 0; i < arr.size(); i++){
//         count[arr[i]]++;
//         maxFreq = max(maxFreq, count[arr[i]]);
//     }

//     for (int i = 0; i < arr.size(); i++)
//     {
//         if(maxFreq==count[arr[i]]){
//             maxAns = arr[i];
//             break;
//         }
//     }
//     return maxAns;
// }

// int main(){
//     return 0;
// }

