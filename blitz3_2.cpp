/*
In a Chess match "a + b", each player has a clock which shows a
minutes at the start and whenever a player makes a move, b seconds
are added to this player's clock. Time on a player's clock decreases
during that player's turns and remains unchanged during the other
player's turns. If the time on some player's clock hits zero (but not
only in this case), this player loses the game.

There's a 3 + 2 blitz chess match. After N turns (i.e. ⌊N+12⌋ moves
made by white and ⌊N2⌋ moves made by black), the game ends and the
clocks of the two players stop; they show that the players (white and
black) have A and B seconds left respectively. Note that after the
N-th turn, b=2 seconds are still added to the clock of the player
that made the last move and then the game ends.

Find the total duration of the game, i.e. the number of seconds that
have elapsed from the start of the game until the end.

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
		int n, a, b;
		cin >> n >> a >> b;
		int left;
		left = 2 * (180 + n) - (a + b);
		cout << left << endl;
	}
}