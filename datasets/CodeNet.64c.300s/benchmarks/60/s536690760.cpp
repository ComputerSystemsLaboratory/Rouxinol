#include<iostream>

using namespace std;

int goban[18][18] = { 0 };
int ans;

void check(int x,int y,int a,int b) {
	if (x == a&&y == b) { ans++; }
	else {
		if (goban[x + 1][y] == 1) {
			check(x + 1, y, a, b);
		}
		if (goban[x][y + 1] == 1) {
			check(x, y + 1, a, b);
		}
	}
}

int main(void) {
	while (1) {
		ans = 0;
		int a, b;
		cin >> a >> b;
		if (a == 0) break;
		int n;
		for (int i = 1; i <= a; i++) {
			for (int j = 1; j <= b; j++) goban[i][j] = 1;
		}

		cin >> n;
		while (n) {
			int x, y;
			cin >> x>>y;
			goban[x][y] = 0;
			n--;
		}
		check(1,1,a,b);
		cout << ans << endl;
	}



}