#include <iostream>
using namespace std;
int d[101] = {},f[101];
int a[101][101];
int kosu[101];
int joutai = 0;
void dfs(int x){
	joutai++;
	d[x] = joutai;
	for(int i = 1;i <= kosu[x];i++){
		if(d[a[x][i]] == 0){
			dfs(a[x][i]);
		}
	}
	joutai++;
	f[x] = joutai;
}

int main(){
	int n,x;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> x;
		cin >> kosu[x];
		for(int j = 1;j <= kosu[x];j++){
			cin >> a[x][j];
		}
	}
	for(int i = 1;i <= n;i++){
		if(d[i] == 0){
			dfs(i);	
		}	
	}

	for(int i = 1;i <= n;i++){
		cout << i << " " << d[i] << " " <<f[i]<<endl;
	}
	return 0;
}