/*
Mario transforms each time he eats a mushroom as follows:

	If he is currently small, he turns normal.
	If he is currently normal, he turns huge.
	If he is currently huge, he turns small.
Given that Mario was initially normal, 
find his size after eating X mushrooms.
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int x, size;
		cin >> x;
		size = x % 3;
		if(size == 0){
			cout << "Normal" << endl;
		}else if(size == 1){
			cout << "Huge" << endl;
		}else if(size == 2){
			cout << "Small" << endl;
		}
	}
}