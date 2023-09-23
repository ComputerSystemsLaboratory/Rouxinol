#include <bits/stdc++.h>
using namespace std;

#define loop(i,n) for(int i=1;i<=n;i++)
int pat[17][17];
bool out[17][17];

int solve(){
	int a, b, n, x, y;
	cin >> a >> b;
	if (a == 0)return 0;
	cin >> n;
	loop(i, a)loop(j, b)pat[i][j] = out[i][j] = 0;
	loop(i, n){
		cin >> x;
		cin >> y;
		out[x][y] = 1;
	}
	pat[1][1] = 1;
	loop(i, a){
		loop(j, b){
			if (out[i][j])continue;
			if (i > 1)pat[i][j] += pat[i - 1][j];
			if (j > 1)pat[i][j] += pat[i][j - 1];
		}
	}
	cout << pat[a][b] << endl;
	return 1;
}

int main(){
	while (solve());
	return 0;
}