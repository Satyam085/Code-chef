/*
A bulb company claims that the average lifetime of its bulbs is at least X units.

The company ran a test on N bulbs. 
You are given the lifetime of N−1 of these bulbs. 
What is the minimum non-negative integer value of lifetime the remaining bulb can have, 
such that the claim of the company holds true?

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,x;
		cin >> n >> x;
		int a[n-2];
		int sum = 0;
		for(int i = 0; i < n-1; ++i){
			cin >> a[i];
			sum += a[i];
		}
		int avg = (n * x) - sum;
		if(avg < 0){
			avg = 0;
		}
		cout << avg << endl;

	}
}