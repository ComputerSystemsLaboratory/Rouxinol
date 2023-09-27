#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	long long i,j,n,m;
	cin >> n;
	while(n){
		char c[2][n],p;
		for(i=0;i<n;i++) cin >> c[0][i] >> c[1][i];
		cin >> m;
		for(i=0;i<m;i++) {
			cin >> p;
			for(j=0;j<n;j++) if(p==c[0][j]){p=c[1][j]; break;}
			cout << p;
		}
		cout << endl;
		cin >> n;
	}
	return 0;
}