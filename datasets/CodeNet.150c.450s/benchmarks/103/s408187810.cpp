#include<iostream>
#include<stdio.h>
#include<math.h>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main(){
	int i,j,k,l,m,a,b;
	vector< vector<int> > s;
	s.resize(9);
	for (i = 0; i < 9; i++) {
		s[i].resize(101);
	}
	for (i = 0; i < 9; i++) {
		for (j = 0; j < 101; j++) {
			s[i][j] = 0;
		}
	}
	for (i = 0; i < 10; i++) {
		s[0][i] += 1;
		s[8][45 - i] += 1;
	}
	for (i = 0; i < 9; i++) {
		for (j = i + 1; j < 10; j++) {
			s[1][i + j] += 1;
			s[7][45 - i - j] += 1;
		}
	}
	for (i = 0; i < 8; i++) {
		for (j = i + 1; j < 9; j++) {
			for (k = j + 1; k < 10; k++) {
				s[2][i + j + k] += 1;
				s[6][45 - i - j - k] += 1;
			}
		}
	}
	for (i = 0; i < 7; i++) {
		for (j = i + 1; j < 8; j++) {
			for (k = j + 1; k < 9; k++) {
				for (l = k + 1; l < 10; l++) {
					s[3][i + j + k + l] += 1;
					s[5][45 - i - j - k - l] += 1;
				}
			}
		}
	}
	for (i = 0; i < 6; i++) {
		for (j = i + 1; j < 7; j++) {
			for (k = j + 1; k < 8; k++) {
				for (l = k + 1; l < 9; l++) {
					for (m = l + 1; m < 10; m++) {
						s[4][i + j + k + l + m] += 1;
					}
				}
			}
		}
	}
	while (cin >> a >> b) {
		if (a == 0 && b == 0)break;
		cout << s[a - 1][b] << endl;
	}
	return 0;
}