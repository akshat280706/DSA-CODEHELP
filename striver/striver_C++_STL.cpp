#include <bits/stdc++.h>
using namespace std;

void explainPair(){
    pair<int, int> p = {1, 3};
    // variable p is having 1,3---> instead of int we can also use something
    //  else like string data type, character data type etc etc
    cout << p.first << " " << p.second; //first will print 1 then 3

    //nested property of pairs(to store more than 2)
    pair<int, pair<int, int>> p2 = {3, {4, 5}};
    cout << p.first << " " << p2.second.second << " " << p2.second.first;//return 3,5,4

    pair<int, int> arr[] = {{1, 2}, {2, 5}, {6, 7}};
    cout << arr[1].second;

}

//vectors: vectors are dynamic in nature
void explainVector(){
    vector<int> v1;//creates an empty container
    v1.push_back(1); //--> will take 1 into the container
    v1.emplace_back(2); //-->dynamically increases the size and pushes 2 at the back
    vector<pair<int, int>> vec;
    vec.push_back({1,2});
    vec.emplace_back(1, 2);

    vector<int> v2(5, 100); // container containing 5 instances of 100
    vector<int> v3(v2); //v3 will be a container which would be a copy of v2
    
    //end iterator points to a memory location after the memeory location of the last element presemt

    // auto it = 5;//automatically asign the data type acc to what we are giving to it

    //deletion
    //lets say we have {10,20,30,40}
    // v.erase(v.begin()+1)//deletes 20
}

void explainList(){
    list<int> ls;
    ls.push_back(2);//{2}
    ls.emplace_back(4);//{2,4}
    ls.push_front(5);//{5,2,4}
    ls.emplace_front();//{2,4}
}

void explainDeque(){
    deque<int> dq;
    dq.push_back(1);//{1}
    dq.emplace_back(2);//{1,2}
    dq.push_front(4);//{4,1,2}
    dq.emplace_front(3);//{3,4,1,2}    
}

void explainStack(){
    //last in first out (LIFO)
    stack<int> st;
    st.push(1);//{1}
    st.push(2);//{2,1}
    st.push(5);//{5,2,1}
    st.push(5);//{5,5,2,1}
    st.pop();//{5,2,1}
    st.emplace(3);//{3,5,2,1}

    cout << st.top() << endl; // print 3

    st.pop();
    cout << st.top() << endl; // now prints 5
    cout << st.size() << endl; // 3
}

void explainQueue(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(5);
    
}







