#include <iostream>

using namespace std;

int R, C;
int a[15][10005];
int x[10005];
int cnt[1050];

int main(void)
{
	for(int i = 0; i < (1<<10); i++){
		for(int j = 0; j < 10; j++){
			if(i & (1<<j)) cnt[i]++;
		}
	}
	
	while(1){
		cin >> R >> C;
		if(R == 0 && C == 0) break;
		for(int i = 0; i < R; i++){
			for(int j = 0; j < C; j++){
				cin >> a[i][j];
			}
		}
		for(int i = 0; i < C; i++){
			x[i] = 0;
			for(int j = 0; j < R; j++){
				x[i] |= (a[j][i] << j);
			}
		}
		
		int S = 1<<R, ans = 0;
		for(int i = 0; i < S; i++){
			int tmp = 0;
			for(int j = 0; j < C; j++){
				tmp += max(cnt[x[j]^i], R - cnt[x[j]^i]);
			}
			ans = max(ans, tmp);
		}
		cout << ans << endl;
	}
	return 0;
}
