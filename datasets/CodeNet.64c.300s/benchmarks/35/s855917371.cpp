#include <iostream>

using namespace std;

int p[100+10][100+10];
int n,a,b,c;

int main(){
	cin >> n;
	for (int i=1; i<=n; i++){
		cin >> a >> b;
		for (int j=1; j<=b; j++){
			cin >> c;
			p[a][c] = 1;
		}
	}
	
	for (int i=1; i<=n; i++){
		for (int j=1; j<=n; j++){
			if (j>1) {cout << ' ';}
			cout << p[i][j];
		}
		cout << endl;
	}
}