#include <iostream>

int a[110][110];
using namespace std;
int main(){
	int r,c; cin >> r >> c ;
	for(int i=0;i<r;++i){
		for(int j=0;j<c;++j){
			cin >> a[i][j];
		}
	}
	for(int i=0;i<r;++i){
		int sum=0; for(int j=0;j<c;++j) sum+=a[i][j];
		a[i][c]=sum;
	}
	for(int j=0;j<=c;++j){
		int sum=0; for(int i=0;i<r;++i) sum+=a[i][j];
		a[r][j]=sum;
	}
	for(int i=0;i<=r;++i){
		for(int j=0;j<=c;++j){
			if(j!=0) cout << ' ' ;
			cout << a[i][j];
		}
		cout << '\n';
	}
}