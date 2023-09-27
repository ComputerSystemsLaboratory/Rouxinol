#include<iostream>
using namespace std;
int main(){
	int dice[10]; cin >> dice[1] >> dice[2] >> dice[3] >> dice[4] >> dice[5] >> dice[6];
	short int q; cin >> q;
	for (short int i = 0; i < q; i++){
		short int a, b; cin >> a >> b;
		if (dice[1] == a) {
			if (dice[2] == b)cout << dice[3];
			else if (dice[3] == b)cout << dice[5];
			else if (dice[5] == b)cout << dice[4];
			else cout << dice[2];
		}
		else if (dice[2] == a) {
			if (dice[6] == b)cout << dice[3];
			else if (dice[3] == b)cout << dice[1];
			else if (dice[1] == b)cout << dice[4];
			else cout << dice[6];
		}
		else if (dice[3] == a) {
			if (dice[6] == b)cout << dice[5];
			else if (dice[5] == b)cout << dice[1];
			else if (dice[1] == b)cout << dice[2];
			else cout << dice[6];
		}
		else if (dice[4] == a) {
			if (dice[6] == b)cout << dice[2];
			else if (dice[2] == b)cout << dice[1];
			else if (dice[1] == b)cout << dice[5];
			else cout << dice[6];
		}
		else if (dice[5] == a) {
			if (dice[6] == b)cout << dice[4];
			else if (dice[4] == b)cout << dice[1];
			else if (dice[1] == b)cout << dice[3];
			else cout << dice[6];
		}
		else if (dice[6] == a) {
			if (dice[5] == b)cout << dice[3];
			else if (dice[3] == b)cout << dice[2];
			else if (dice[2] == b)cout << dice[4];
			else cout << dice[5];
		}
		cout << endl;
	}
	return 0;
}