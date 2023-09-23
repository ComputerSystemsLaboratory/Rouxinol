#include<iostream>
using namespace std;

int main(){
	int n, i, j, k, l, count[5][4][11] = {};
	cin >> n;
	for( int u = 0; u < n; u++){ cin >> i >> j >> k >>l; count[i][j][k] += l;}
	for( int u1 = 1; u1 <= 4; u1++){ for( int u2 = 1; u2 <= 3; u2++){ for( int u3 =1; u3 <= 10; u3++){ if( u1 != 4 && u2 == 3 && u3 == 10){ cout << " " << count[u1][u2][u3] << "\n####################\n";} else { if( u3 == 10 ){ cout << " " << count[u1][u2][u3] << "\n"; } else { cout << " " << count[u1][u2][u3]; } } } } }
	
return 0;
}