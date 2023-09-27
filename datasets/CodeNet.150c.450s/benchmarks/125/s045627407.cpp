#include <bits/stdc++.h>
using namespace std;
const int N = 101;
int v[N][N]={0};
int stt[N]={0};
int fit[N]={0};
int t=0;

void dfs(int n){
	if(stt[n]!=0) return;
	stt[n] = ++t;
	for(int i=0;i<v[n][1];i++){
		dfs(v[n][i+2]);
	}
	fit[n]=++t;
}

int main(){
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		int u,k;
		cin >> u >> k;
		v[u][0]=i+1;
		v[u][1]=k;
		for(int j=0;j<k;j++){
			int a;
			cin >> a;
			v[u][j+2]=a;
		}
	}
	for(int i=1;i<=n;i++)dfs(i);
	for(int i=1;i<n+1;i++){
		cout << i << " " <<stt[i] << " " << fit[i] << endl;
	}
    return 0;
}