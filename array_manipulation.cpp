/*
Starting with a 1-indexed array of zeros and a list of operations, for each operation add a value to each the array element between two given indices, inclusive. Once all operations have been performed, return the maximum value in the array.
*/
/*
Input Case:
5 3
1 2 100
2 5 100
3 4 100
*/

#include <bits/stdc++.h>  
using namespace std;

const int N = 1e7 + 10;
long long int ar[N];

int main(){

#ifndef ONLINE_JUDGE
freopen("inputf.txt", "r", stdin);
freopen("outputf.txt", "w", stdout);
#endif

    int n, m;
    cin >> n >> m;
    while(m--){
        int a, b, k;
        cin >> a >> b >> k;
        ar[a] += k;
        ar[b+1] -= k;
        // for(; a <= b; ++a){
        //     ar[a] += k;
        // }
    }
    for (int i = 1; i <= n; ++i){
        ar[i] += ar[i-1];
    }
    long long mx = -1;
    for (int i = 1; i <= n; ++i){
        if(mx < ar[i]){
            mx = ar[i];
        }
    }
    cout << mx << endl;
}