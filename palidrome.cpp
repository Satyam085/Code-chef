/*

*/
/*
Input Case:
2
5 5
abcec
1 2
2 5
3 6
1 5
1 4
5 5
aabbc
1 2
2 5
3 5
1 5
1 4
*/
#include <bits/stdc++.h>  
using namespace std;

const int N = 1e5 + 10;
int hsh[N][26];

int main(){

#ifndef ONLINE_JUDGE
freopen("inputf.txt", "r", stdin);
freopen("outputf.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    while(t--){
        int N, q;
        cin >> N >> q;
        string n;
        cin >> n;
        int len = n.length();
        for (int i = 0; i < len; ++i){
            hsh[i][n[i]- 'a']++;
        }
        for (int i = 0; i < 26; ++i){
            for (int j = 0; j <= len; ++j){
                hsh[j][i] += hsh[j-1][i];
            }
        }
        while(q--){
            int l, r;
            cin >> l >> r;
            // l--;r--;
            // for (int i = l; i <= r; ++i){
            //     hash[n[i] - 'a']++;
            // }
            // int odd = 0;
            // for (int i = 0; i < 26; ++i){
            //     if(hash[i] % 2 != 0){
            //         odd++;
            //     }
            // }
            int odd = 0;
            for (int i = 0; i < 26; ++i){
                int charCt = hsh[][i] - hsh[l-1][i];
                if() 
            }
            if(odd > 1){
                cout << "No" << endl;
            }else {
                cout << "Yes" << endl;
            }
        }        
    }
}