#include <bits/stdc++.h>
using namespace std;
int main(){
	int r,c;
	cin >> r >> c;
	int a[105][105]={0};
	for(int i=1;i<=r;i++){
		for(int j=1;j<=c;j++){
			int num;
			cin >> num;
			a[i][j]=num;
		}
		for(int j=1;j<=c;j++){
			a[i][c+1]+=a[i][j];
		}
	}
	for(int i=1;i<=c+1;i++){
		for(int j=1;j<=r;j++){
			a[r+1][i]+=a[j][i];
		}
	}
	for(int i=1;i<=r+1;i++){
		for(int j=1;j<=c+1;j++){
			if(j!=c+1) cout<<a[i][j]<<" ";
			else cout<<a[i][j]<<endl;
		}
	}
	return 0;
}