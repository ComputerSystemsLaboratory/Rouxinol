#include <iostream>
using namespace std;
int G[101][101];
int n,v,k,p;
int main(){
	cin >>n;
	for(int i=0;i<n;i++){
		cin >> v>>k;
		for(int j=0;j<k;j++){
			cin >> p;
			G[v][p]=1;
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<n;j++){
			cout << G[i][j]<<" ";
		}
		cout << G[i][n]<<endl;
	}
}