#include <algorithm>
#include <iostream>
#include <math.h>
#include <stdio.h>
#include <string>
#include <sstream>
#include <vector>
#include <set>
#include <map>
#include <cmath>
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

using namespace std;
typedef long long int ll;

int field[10][5];

int howManySameColorRight(int i, int j,int color) {
	if (j >= 5) return 0;
	if (field[i][j] == 0) return 0;
	if (color != field[i][j]) return 0;
	if (j == 4 && color == field[i][j]) return 1;
	return howManySameColorRight(i, j + 1, color) + 1;
}

void banishRightN(int i, int j, int n) {
	for (int k = 0; k < n; k++) {
		field[i][j + k] = 0;
	}
}

void moveBlocks(int h) {
	for (int i = 0; i < h - 1; i++) {
		for (int j = 0; j < 5; j++) {
			if (field[i + 1][j] == 0) {
				field[i + 1][j] = field[i][j];
				field[i][j] = 0;
			}
		}
	}
}

int main()
{
	int h;
	cin >> h;
	while (h != 0) {
		rep(i, h) {
			rep(j, 5) cin >> field[i][j];
		}
		ll ans = 0;
		rep(k, 20) {
			for (int i = 0; i < h; i++) {
				for (int j = 0; j < 5; j++) {
					int blocks = howManySameColorRight(i, j, field[i][j]);
					if (blocks >= 3) {
						ans += blocks * field[i][j];
						banishRightN(i, j, blocks);
					}
				}
			}
			rep(l,100)moveBlocks(h);
			/*cout << "------------" << endl;
			rep(i, h) {
				rep(j, 5) cout << field[i][j] << " ";
				cout << endl;
			}*/
		}
		cout << ans << endl;
		cin >> h;
	}
	


	return 0;
}
