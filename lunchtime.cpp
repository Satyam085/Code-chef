/*
Chef has his lunch only between
1 pm and 4 pm (both inclusive).
Given that the current time is X pm,
find out whether it is lunchtime for Chef.
*/
/*
Input case :
3
1
7
3
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
		int x;
		cin >> x;
		if(x <= 4 && x >= 1){
			cout << "Yes" << endl;
		}else{
			cout << "No" << endl;
		}
	}
}