/*
Chef decided to go on a diet during the following N days (numbered 1 through N). Part of the diet plan is to eat K grams of protein during each day. For each valid i, Chef wants to buy Ai grams of protein in the morning of the i-th day and then eat K grams of protein as part of his dinner. If he has any protein remaining, he can store it and use it in later dinners. Initially, Chef is storing 0 grams of protein.

Determine whether Chef will have enough protein all the time during his diet. In case he will not have enough, find the first day on which Chef will be unable to eat K grams of protein
*/
/*
Input Case:
3
4 5
7 3 6 5
3 4
3 10 10
3 4
8 1 1

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
        int n, k;
        cin >> n >> k;
        int a[n] = {0};
        for(int i = 0; i < n; ++i){
            cin >> a[i];
        }
        int store = 0;
        int day = 0;
        for(int i = 0; i < n; ++i){
            store += a[i] - k;
            day++;
            if(store < 0) break;
        }
        if(store >= 0){
            cout << "Yes" << endl;
        }else{
            cout << "No " << day << endl;
        }
    }
}