#include <math.h>
#include <utility>
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main(){
	int a;
	int b;
	int n;
	int x;
	int y;
	int k;
	while(true) {
		cin >> a >> b;
		if ( a == 0 ) break;
		cin >> n;
		int joi[17][17] = {0};
		for ( int i = 0; i < n; i++ ) {
			cin >> x >> y;
			joi[x][y] = -1;
		}
		for ( int i = 1; i <= a; i++ ) {
			for ( int j = 1; j <= b; j++ ) {
				if ( i == 1 && j == 1 ) {
					joi[i][j] = 1;
				}else {
					if ( joi[i][j] == -1 ) {
						joi[i][j] = 0;
					}else {
						joi[i][j] = joi[i-1][j] + joi[i][j-1];
					}
				}
			}
		}
		cout << joi[a][b] << endl;
	}
	return 0;
}