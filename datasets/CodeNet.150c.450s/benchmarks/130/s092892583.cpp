#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,m;	cin>>n>>m;
	int a[n][m],b[m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>a[i][j];
		}
	}
	for(int i=0;i<m;i++){
		cin>>b[i];
	}
	for(int i=0;i<n;i++){
		a[i][0]*=b[0];
	}
	for(int i=1;i<m;i++){
		for(int j=0;j<n;j++){
			a[j][i]=(a[j][i]*b[i])+a[j][i-1];
		}
	}
	for(int i=0;i<n;i++){
		cout<<a[i][m-1]<<endl;
	}
	return 0;
}