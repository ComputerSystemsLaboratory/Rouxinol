#include <iostream>
#include <vector>
using namespace std;
enum Card { S, H, C, D };
char pic[4] = { 'S','H','C','D' };
int main() {
	cin.tie(0); ios::sync_with_stdio(false);
	vector<vector<bool>> card(4, vector<bool>(13,false));
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		char c; int v; cin >> c >> v;
		int key = c == 'S' ? S : c == 'H' ? H : c == 'C' ? C : D;
		card[key][v - 1] = true;
	}
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 13; j++) {
			if (!card[i][j]) { cout << pic[i] << " " << j + 1 << endl; }
		}
	}
}