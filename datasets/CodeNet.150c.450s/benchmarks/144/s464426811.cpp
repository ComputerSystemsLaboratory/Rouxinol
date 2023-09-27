#include <bits/stdc++.h>
using namespace std;
#define rep(i,n)	for(int i=0;i<n;i++)

int main(){
	int n,m,l;	cin>>n>>m>>l;
	long long int a[n][m],b[m][l],c[n][l];
	memset(c,0,sizeof(c));
	rep(i,n){
		rep(j,m){
			cin>>a[i][j];
		}
	}
	rep(i,m){
		rep(j,l){
			cin>>b[i][j];
		}
	}
	rep(i,n){
		rep(j,l){
			rep(k,m){
				c[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	rep(i,n){
		rep(j,l-1){
			cout<<c[i][j]<<" ";
		}
		cout<<c[i][l-1]<<endl;
	}
	return 0;
}