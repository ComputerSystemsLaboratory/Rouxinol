/*16D8103008D 西村悠輝　nissy0507barista  alds11_B*/ 

#include<iostream>

#define MAX 110
using namespace std;

int n,v,k,u; ///超点数、頂点番号、出次数、隣接
int d[MAX], f[MAX];///タイムスタンプ
int a[MAX][MAX];
int cnt=0;
int flag[MAX]; ///通ったかどうか

void dfs(int x) {

	if (flag[x] == 1)return;
	cnt++;
	d[x] += cnt;
	flag[x] = 1;
	for (int i = 1; i <= n; i++) {
		if (a[x][i] == 1 && flag[i] == 0) dfs(i);
	}
	cnt++;
	f[x] += cnt;

}

int main(void)
{
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> v >> k;
		for (int j = 0; j < k; j++) {
			cin >> u ;
			a[v][u]=1;
		}
	}
	
	for (int i = 1; i <= n; i++) dfs(i);

	for (int i = 1; i <= n; i++) {
		cout << i << " " << d[i] << " " << f[i] << endl;
	}

	return 0;
}

