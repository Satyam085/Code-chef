/*
You are given an array A of integers of size N. You will be given Q queries where each query is represented by two integers L, R. You have to find the gcd(Greatest Common Divisor) of the array after excluding the part from range L to R inclusive (1 Based indexing). You are guaranteed that after excluding the part of the array remaining array is non empty.
*/
/*
Input Case:
1
3 3
2 6 9
1 1
2 2
2 3
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
        int n, q;
        cin >> n >> q;
        
        int a[n+10];
        int forward[n+10];
        int backward[n+10];

        forward[0] = backward[n+1] = 0;
        
        for (int i = 1; i <= n; ++i){
            cin >> a[i];
            forward[i] = __gcd(forward[i-1],a[i]);
        }
        for (int i = n; i >= 1; --i){
            backward[i] = __gcd(backward[i+1],a[i]);
        }

        while(q--){
            int l, r;
            int gc = 0;
            cin >> l >> r;
            gc = __gcd(forward[l-1], backward[r+1]);

            // for(int i = 1; i <= l-1; ++i){
            //     gc = __gcd(gc,a[i]);
            // }
            // for(int i = r+1; i <= n; ++i){
            //     gc = __gcd(gc,a[i]);
            // }
            cout << gc << endl;

        }
        

    }
}