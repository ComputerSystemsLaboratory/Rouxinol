#include <iostream>
using namespace std;
int G[101][101];
int d[101];
int f[101];
bool flag[101];
int n,v,k,p;
int t;

void check(int i){
	if(flag[i])return;
	flag[i]=true;
	t++;
	d[i]=t;
	for(int j=1;j<=n;j++){
		if(G[i][j]==1)check(j);
	}
	t++;
	f[i]=t;
	return;
}


int main(){
	cin >>n;
	for(int i=0;i<n;i++){
		cin >> v>>k;
		for(int j=0;j<k;j++){
			cin >> p;
			G[v][p]=1;
		}
	}
	t=0;
	for(int i=1;i<=n;i++)check(i);
	for(int i=1;i<=n;i++){
		cout << i<< " "<<d[i]<< " "<<f[i] <<endl;
	}
}