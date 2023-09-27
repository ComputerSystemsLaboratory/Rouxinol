#include<iostream>
#include<algorithm>
using namespace std;

int a, b, cnt = 0, edge[18][18];  // x:2 y:1

void search(int x, int y) {
	if (x == a && y == b) {
		cnt++;
		return;
	}
	switch (edge[x][y]) {
	case 0:
		return;
	case 1:
		search(x, y + 1);
		break;
	case 2:
		search(x + 1, y);
		break;
	case 3:
		search(x, y + 1);
		search(x + 1, y);
		break;
	}
	return;
}



int main() {
	int n, tmpx, tmpy, i, j;
	while (1) {
		cin >> a >> b;
		if (a == 0 && b == 0)break;

		//init
		cnt = 0;
		for (i = 1; i < a; i++) {
			for (j = 1; j < b; j++) {
				edge[i][j] = 3;
			}
		}
		for (i = 1; i < a; i++) {
			edge[i][b] = 2;
		}
		for (j = 1; j < b; j++) {
			edge[a][j] = 1;
		}

		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> tmpx >> tmpy;
			edge[tmpx - 1][tmpy] = 1;
			edge[tmpx][tmpy - 1] = 2;
			edge[tmpx][tmpy] = 0;
		}

		search(1, 1);

		cout << cnt << endl;

	}






	return 0;
}