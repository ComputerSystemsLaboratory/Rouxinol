#include <iostream>
using namespace std;

int main(){
	int i,k,l,n,m;
	int a[100][100];
	int j[100];
	cin >> n;
	for(m=0;m<100;m++){
		for(l=0;l<100;l++){
			a[m][l]=0;//初期化
		}
	}

	for( m=0 ; m<n ; m++ ){
		cin >> i >> k ;
		for(l=0;l<k;l++){
			cin >>j[l];
			a[i-1][j[l]-1] = 1;//情報読み込みaij→a(i-1)(j-1)
		}
	}
	for( m=0 ; m<n ; m++ ){
		for(l=0;l<n-1;l++){
			cout<<a[m][l]<<" ";
		}
			cout<<a[m][n-1]<<endl;
	}
}