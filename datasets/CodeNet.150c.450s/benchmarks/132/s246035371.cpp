#include <iostream>
using namespace std;

int main() {
	int n, p;
	while(cin >> n >> p && (n || p)){
		int stone[51] = {0}, bowl = p, turn = 0, ans = -1;
		while(1){
			if(bowl > 0){
				bowl -= 1;
				stone[turn]++;
			}
			else{
				bowl += stone[turn];
				stone[turn] = 0;
			}
			
			if(stone[turn] == p){
				ans = turn;
				break;
			}
			turn++;
			if(turn == n)
				turn = 0;
		}
		cout << ans << endl;
	}
	return 0;
}