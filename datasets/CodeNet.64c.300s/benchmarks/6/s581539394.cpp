#include <iostream>
using namespace std;

int tmp[5][4][11];
int main() {
	int n ; cin >> n ;
	while(n--){
		int b,f,r,v; cin >> b >> f >> r >> v ;
		tmp[b][f][r]+=v;
	}
	for(int i=1;i<=4;++i){
		for(int j=1;j<=3;++j){
			for(int k=1;k<=10;++k){
				cout << ' ' << tmp[i][j][k] ;
			}
			cout << '\n';
		}
		if(i<4){
		for(int j=0;j<20;++j) cout << '#';
		cout << '\n';
		}
	}
}