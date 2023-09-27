#if 0
time: 15min
using e[] as a indicator to find whether a node has been searched.						
#endif
#include <iostream>
#include <queue>

using namespace std;

int p[100+10][100+10];
int D[100+10],e[100+10],f[100+10];
int n,a,b,c,t;

void dfs(int cur){
	D[cur] = 1;
	t += 1;
	for (int i=1; i<=n; i++){
		if (p[cur][i]>0 && !D[i]){
			f[i] = t+1;
			dfs(i);
		}
	}
	t += 1;
	e[cur] = t;
}

int main(){
	cin >> n;
	for (int i=1; i<=n; i++){
		cin >> a >> b;
		for (int j=1; j<=b; j++){
			cin >> c;
			p[a][c] = 1;
		}
	}
	f[1] = 1;
	for (int i=1; i<=n; i++){
		if (!D[i]){
			f[i] = !f[i] ? t+1 : f[i];
			dfs(i);
		} 	
	}
	

	for (int i=1; i<=n; i++){
		cout << i << ' ' << f[i] << ' ' << e[i] << endl;
	}
}