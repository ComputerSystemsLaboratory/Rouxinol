#include <iostream>
#include <string>
#include <cstring>
#include <map>
#include <algorithm>

bool card[4][14];
using namespace std;
int main(){
	// S, H, C, D
	int n; cin >> n;
	for (int i = 0; i < n; ++i){
		char ch; int m;
		cin >> ch >> m;
		switch (ch){
		case 'S': { card[0][m] = true; break; }
		case 'H': { card[1][m] = true; break; }
		case 'C': { card[2][m] = true; break; }
		case 'D': { card[3][m] = true; break; }
		}
	}
	for (int i = 0; i < 4; ++i){
		for (int j = 1; j <= 13; ++j){
			if (card[i][j] == false){
				switch (i){
				case 0: { cout << 'S' << ' '; break; }
				case 1: { cout << 'H' << ' '; break; }
				case 2: { cout << 'C' << ' '; break; }
				case 3: { cout << 'D' << ' '; break; }
				}
				cout << j << '\n';
			}
		}
	}
}