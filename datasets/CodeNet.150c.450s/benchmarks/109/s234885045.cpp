// AOJ 2013

#include <iostream>
#include <cstdio>

using namespace std;

int data[24][60][60];

int main(void)
{
	int n;
	while (cin >> n, n){
		for (int i = 0; i < 24; i++){
			for (int j = 0; j < 60; j++){
				for (int k = 0; k < 60; k++){
					data[i][j][k] = 0;
				}
			}
		}

		int s[3], e[3];
		for (int i = 0; i < n; i++){
			scanf("%d:%d:%d %d:%d:%d", &s[0], &s[1], &s[2], &e[0], &e[1], &e[2]);
			int h = s[0], m = s[1], sec = s[2];
			data[h][m][sec] += 1;
			while (1){
				if (h == e[0] && m == e[1] && sec == e[2]){
					data[h][m][sec]--;
					break;
				}
				sec++;
				if (sec == 60){
					m++;
					sec = 0;
				}
				if (m == 60){
					h++;
					m = 0;
				}
				data[h][m][sec] += 1;
			}
		}
/*
		for (int i = 0; i < 24; i++){
			for (int j = 0; j < 60; j++){
				int cnt = 0;
				for (int k = 0; k < 60; k++){
					cnt = max(cnt, data[i][j][k]);
				}
				cout << cnt << " ";
			}
			puts("");
		}
*/
		int ret = 0;
		for (int i = 0; i < 24; i++){
			for (int j = 0; j < 60; j++){
				for (int k = 0; k < 60; k++){
					ret = max(ret, data[i][j][k]);
				}
			}
		}
		cout << ret << endl;
	}

	return 0;
}