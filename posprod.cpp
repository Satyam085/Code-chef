/*
You are given an array A of length N. 
Find the number of pairs of indices (i,j) 
such that

1≤i<j≤N
Ai⋅Aj>0
*/

/*
Input Case :
3
5
1 -3 0 2 -1
4
-1 -1 -1 -1
4
0 1 2 3

*/

#include<bits/stdc++.h>
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
		int a[n-1];
		int pos = 0; 
		int neg = 0;
		for(int i = 0; i < n; ++i){
			cin >> a[i];
			if(a[i] > 0){
				pos++;
			}else if(a[i] < 0){
				neg++;
			}	
		}
		int count = 0;
		for(int i = 1; i < pos; ++i){
			count += i;
		}
		for(int i = 1; i < neg; ++i){
			count += i;
		}

		/*for(int i = 0; i < n; ++i){
			for(int j = i+1; j < n; ++j){
				if(a[i] * a[j] > 0){
					count++;
				}
			}
		}*/
		cout << count << endl;	
	}
}