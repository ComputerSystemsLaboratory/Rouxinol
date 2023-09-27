#include <iostream>
#include <string>
using namespace std;
int b[100][100], n, m;
int xx[4] = {-1, 0, 0, 1}, yy[4] = {0, -1, 1, 0};

int solv(int g[100][100], int y, int x, char c){
	if(y < 0 || x < 0 || n <= y || m <= x)return 0;
	if(c == 'a')c = g[y][x];
	if(b[y][x] || g[y][x] != c)return 0;
	b[y][x] = 1;
	for(int i = 0;i < 4;i++)solv(g, y + yy[i], x + xx[i], c);
	return 1;
}

int main(){
	int g[100][100];
	string s;
	while(cin >> n >> m, n){
		fill((int*)b, (int*)(b+100), 0);
		for(int i = 0;i < n;i++){
			cin >> s;
			for(int j = 0;j < m;j++)g[i][j] = s[j];
		}
		int ans = 0;
		for(int i = 0;i < n;i++){
			for(int j = 0;j < m;j++){
				ans += solv(g, i, j, 'a');
			}
		}
		cout << ans << endl;
	}
	return 0;
}