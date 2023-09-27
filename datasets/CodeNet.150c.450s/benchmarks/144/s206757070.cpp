#include <iostream>
#define int long long
using namespace std;
signed main(void){
	int a[100][100]={0},b[100][100]={0},c[100][100]={0},i,j,k,l,m,n;
	cin>>n>>m>>l;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			cin>>a[i][j];
		}
	}
	for(i=0;i<m;i++){
		for(j=0;j<l;j++){
			cin>>b[i][j];
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<l;j++){
			for(k=0;k<m;k++){
				c[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<l-1;j++){
			cout<<c[i][j]<<' ';
		}
		cout<<c[i][j]<<endl;
	}
	return 0;
}