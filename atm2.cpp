/*
There is an ATM machine. Initially, it contains a total of K units of money. N people (numbered 1 through N) want to withdraw money; for each valid i, the i-th person wants to withdraw Ai units of money.

The people come in and try to withdraw money one by one, in the increasing order of their indices. Whenever someone tries to withdraw money, if the machine has at least the required amount of money, it will give out the required amount. Otherwise, it will throw an error and not give out anything; in that case, this person will return home directly without trying to do anything else.

For each person, determine whether they will get the required amount of money or not
*/

/*
Input Case :
2
5 10
3 5 3 2 1
4 6
10 8 6 4
*/

#include <bits/stdc++.h>  
using namespace std;
 
int main(){

    #ifndef ONLINE_JUDGE
        freopen("inputf.txt", "r", stdin);
        freopen("outputf.txt", "w", stdout);
        freopen("error.txt", "w", stderr);
    #endif

    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        string u;
        int a[n];
        for (int i = 0; i < n; ++i){
            cin >> a[i];
            if(k >= a[i]){
                k -= a[i];
                u += '1';
            }else{
                u += '0';
            }
        }
        cout << u << endl;
    }
}