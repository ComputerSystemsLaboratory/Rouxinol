#include<iostream>
using namespace std;

int R, C;
int map[10][10000];
int bit[10];
int ans;

#define max(a,b) (a>b?a:b)

void search(int c, int xorf) {
	if(c==R) {
		int cnt, sum = 0;
		for(int i=0; i<C; ++i) {
			cnt = 0;
			for(int j=0; j<R; ++j) {
				if((map[j][i]^bit[j])==0) cnt++;
			}
			sum += (cnt>R/2?cnt:R-cnt);
		}
		ans = max(ans, sum);
		return;
	}
	bit[c] = xorf;
	search(c+1, 0);
	search(c+1, 1);
}

int main() {
	while(1) {
		cin >> R >> C;
		if(!R&&!C) break;
		ans = 0;
		for(int i=0; i<R; ++i) {
			for(int j=0; j<C; ++j) {
				cin >> map[i][j];
			}
		}
		search(0, 0); search(0, 1);
		cout << ans << endl;
	}
	return 0;
}