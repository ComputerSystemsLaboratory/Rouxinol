#include <iostream>

long a[101][101];
long b[101][101];
long c[101][101];
using namespace std;
int main(){
	int n,m,l; cin >> n >> m >> l ;
	for(int i=0;i<n;++i) for(int j=0;j<m;++j) cin >> a[i][j];
	for(int j=0;j<m;++j) for(int k=0;k<l;++k) cin >> b[j][k];
	for(int i=0;i<n;++i){
		for(int j=0;j<l;++j){
			long sum=0;
			for(int k=0;k<m;++k) sum+=a[i][k]*b[k][j];
			c[i][j]=sum;
		}
	}
	for(int i=0;i<n;++i){
		for(int j=0;j<l;++j){
			if(j!=0) cout << ' ' ;
			cout << c[i][j];
		}
		cout << '\n' ;
	}
}