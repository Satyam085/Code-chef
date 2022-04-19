/*
Chef is a software developer, so he has to switch between different languages sometimes. Each programming language has some features, which are represented by integers here.

Currently, Chef has to use a language with two given features A and B. He has two options --- switching to a language with two features A1 and B1, or to a language with two features A2 and B2. All four features of these two languages are pairwise distinct.

Tell Chef whether he can use the first language, the second language or neither of these languages (if no single language has all the required features).
*/
/*
Input Case:
3
1 2 2 1 3 4
3 4 2 1 4 3
1 2 1 3 2 4

*/
#include <bits/stdc++.h>  
using namespace std;
 
int main(){

#ifndef ONLINE_JUDGE
    freopen("inputf.txt", "r", stdin);
    freopen("outputf.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    while(t--){
        int a, b, a1, b1, a2, b2;
        int out = 0;
        cin >> a >> b >> a1 >> b1 >> a2 >> b2;
        if(a == a1 || a == b1){
            if(b == a1 || b == b1){
                out = 1;
            }
        }
        if(a == a2 || a == b2){
            if(b == a2 || b == b2){
                out = 2;
            }
        }
        cout << out << endl;
    }
}