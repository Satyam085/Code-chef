/*

*/
/*
Input Case:

*/
#include <bits/stdc++.h>  
using namespace std;
 
// void printVec(vector<int> &v){
//     for(int i = 0; i < v.size(); ++i){
//         cout << v[i] << " ";
//     }
//     cout << endl;
// }

void printVec(vector<pair<int, int>> &v){
    for(int i = 0; i < v.size(); ++i){
        cout << v[i].first << " " << v[i].second;
    }
    cout << endl;
}

int main(){

#ifndef ONLINE_JUDGE
freopen("inputf.txt", "r", stdin);
freopen("outputf.txt", "w", stdout);
#endif
    

    // // Pairs
    // pair<int, string> p;
    // pair<int, string> q;
    // p = make_pair(2, "abc");
    // q = {3, "fsdibv"};
    // cout << p.first << " " << p.second << endl;
    // cout << q.first << " " << q.second << endl;
    // pair<int, int> ar[3];


    // // Vectors
    // vector<int> v;
    // int n;
    // cin >> n;
    // for(int i = 0; i < n; ++i){
    //     int x;
    //     cin >> x;
    //     v.push_back(x);
    // }
    // printVec(v);

    // vector<int> q(4, 1453);
    // printVec(q);

    // vector<pair<int, int>> v = {{1,2}, {3,5}};
    // printVec(v);

    vector<int> v = {1,2,3,4};
    // vector<int> :: iterator k = v.begin();
    // for(k=v.begin(); k != v.end(); ++k){
    //     cout << *k << endl;
    // }

    for(int &value : v){
        cout << value << " ";
    }
    auto asd = 1616;

}

