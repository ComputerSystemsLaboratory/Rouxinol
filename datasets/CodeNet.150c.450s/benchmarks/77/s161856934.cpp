#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
#define P pair<int,int>

int main() {
	int a;
	while (cin >> a,a) {
		vector<vector<int>>b(a, vector<int>(2));
		for (int c = 0; c < a; c++)cin >> b[c][0] >> b[c][1];
		bool d[21][21]{};
		int e;
		cin >> e;
		int x = 10, y = 10;
		for (int f = 0; f < e; f++) {
			char g; int h;
			cin >> g >> h;
			for (int i = 0; i < h; i++) {
				switch (g) {
				case 'N':y++; break;
				case 'S':y--; break;
				case 'E':x++; break;
				case 'W':x--; break;
				}
				d[x][y] = true;
			}
		}
		bool s = false;
		for (int k = 0; k < a; k++) {
			if (!d[b[k][0]][b[k][1]])break;
			if (a - 1 == k)s = true;
		}
		(s) ? (cout<<"Yes"<<endl) : (cout << "No" << endl);
	}
}