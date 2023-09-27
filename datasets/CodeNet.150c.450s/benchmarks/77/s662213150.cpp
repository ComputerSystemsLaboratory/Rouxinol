#include <bits/stdc++.h>
using namespace std;
#define INF 100000005
#define MAX 200005

string str = "NESW";
int yy[4] = {1, 0, -1, 0}, xx[4] = {0, 1, 0, -1};
int a[21][21], n, m, py, px;
int solve(int h, int d){
	int ans = 0;
	for(int i = 0;i < d;i++){
		py = py+yy[h];
		px = px+xx[h];
		if(a[py][px]){
			ans++;
			a[py][px] = 0;
		}
	}
	return ans;
}

int main(){
	int d, y, x, h;
	char c;
	while(cin >> n, n){
		int ans = 0;
		py = px = 10;
		fill((int*)a, (int*)(a+21), 0);
		for(int i = 0;i < n;i++){
			cin >> x >> y;
			a[y][x] = 1;
		}
		cin >> m;
		for(int i = 0;i < m;i++){
			cin >> c >> d;
			for(int j = 0;j < 4;j++)if(c == str[j])h = j;
			ans += solve(h, d);
		}
		if(n-ans == 0)cout << "Yes" << endl;
		else cout << "No" << endl;
	}
	return 0;
}