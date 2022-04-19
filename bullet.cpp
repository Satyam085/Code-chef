/*
Mario's bullet moves at X pixels per frame. 
He wishes to shoot a goomba standing Y pixels away from him. 
The goomba does not move.

Find the minimum time (in seconds) after which 
Mario should shoot the bullet, 
such that it hits the goomba after at least Z seconds from now.
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int x, y, z, delay;
		cin >> x >> y >> z;
		delay = z - (y / x);
		if(delay < 0){
			delay = 0;
		}
		cout << delay << endl;
	}
}