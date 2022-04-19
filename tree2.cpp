/*
On a sunny day, Akbar and Birbal were taking a leisurely walk in palace gardens. Suddenly, Akbar noticed a bunch of sticks on the ground and decided to test Birbal's wits.

There are N stick holders with negligible size (numbered 1 through N) in a row on the ground. Akbar places all the sticks in them vertically; for each valid i, the initial height of the stick in the i-th holder is Ai. Birbal has a stick cutter and his task is to completely cut all these sticks, i.e. reduce the heights of all sticks to 0. He may perform zero or more operations; in each operation, he should do the following:

Choose an integer H and fix the cutter at the height H above the ground.
The cutter moves from the 1-st to the N-th stick holder. Whenever it encounters a stick whose current height is greater than H, it cuts this stick down to height H (i.e. for a stick with height h>H, it removes its upper part with length h−H).
All the upper parts of sticks that are cut in one operation must have equal lengths. Otherwise, the operation may not be performed.
For example, if the heights of sticks are initially [5,3,5], then some valid values for H in the first operation are 3 and 4 ― the cutter cuts the upper parts of two sticks and their lengths are [2,2] and [1,1] respectively. H=2 is an invalid choice because it would cut the upper parts of all three sticks with lengths [3,1,3], which are not all equal.

Akbar wants Birbal to completely cut all sticks in the minimum possible number of operations. If you want to be friends with Birbal, help him solve the problem.
*/
/*
Input Case:
1
3
1 2 3

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
        int n;
        cin >> n;
        int sticks[n] = {0};
        int mx = -1;
        for(int i = 0; i < n; ++i){
            cin >> sticks[i];
            if(mx < sticks[i]) mx = sticks[i];
        }
        int count = 0;
        int left[n] = {0};
        for(int i = mx; i >= 0; --i){
            for(int j = 0; j < n; ++j){
                left[j] = sticks[j] - i;
                if(left[j] < 0) left[j] = 0;
            }
        }


    }
}