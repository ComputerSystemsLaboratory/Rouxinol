#include <iostream>
using namespace std;

int main(){
	int n,m,l,i,j,p;
	cin >> n;
	int f[1000][1000];
	for ( i = 0; i < n; i++){
		cin >> m;
		cin >> p;
		for ( j = 0; j < p; j++){
			cin >> l;
			f[m-1][l-1] = 1;
		}
	}
	for ( i = 0; i < n; i++){
		for ( j = 0; j < n-1; j++){
			cout << f[i][j] << " ";
		}
		cout << f[i][n-1] << endl;
	}
}