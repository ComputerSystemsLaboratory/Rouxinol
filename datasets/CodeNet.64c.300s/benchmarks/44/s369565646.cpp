#include <iostream>
#include <utility>
#include <algorithm>
using namespace std;

const int INF = 10000000;

int main() {
	int n;
	while(cin >> n, n) {
		int tab[16][16];
		int m = 0;
		for(int i = 0; i < 16; i++) {
			for(int j = 0; j < 16; j++)
				tab[i][j] = INF;
			tab[i][i] = 0;
		}
		for(int i = 0; i < n; i++) {
			int a, b, c;
			cin >> a >> b >> c;
			tab[a][b] = tab[b][a] = c;
			m = max(m, max(a, b));
		}
		m++;
		for(int i = 0; i < 16; i++) {
			for(int j = 0; j < 16; j++) {
				for(int k = 0; k < 16; k++) {
					tab[j][k] = min(tab[j][k], tab[j][i] + tab[i][k]);
				}
			}
		}

		/*
		for(int i = 0; i < 16; i++) {
			for(int j = 0; j < 16; j++) {
				cout << tab[i][j] << " ";
			}
			cout << endl;
		}
		*/

		pair<int,int> ans(INF,-1);
		for(int i = 0; i < m; i++) {
			pair<int,int> tmp(0,i);
			for(int j = 0; j < m; j++) {
				tmp.first += tab[i][j];
			}
			ans = min(ans, tmp);
		}
		cout << ans.second << " " << ans.first << endl;
	}
}