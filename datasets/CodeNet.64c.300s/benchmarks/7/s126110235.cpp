#include<iostream>
using namespace std;

int main(){
	int x, n;
	char y;
	bool cards[4][14] ={};
	cin >> n;
	for( int i = 0; i < n; i++ ){ cin >> y >> x;
	if( y == 'S' ){ cards[0][x] = 1; }
	else if( y == 'H' ){ cards[1][x] = 1; }
	else if( y == 'C' ){ cards[2][x] = 1; }
	else if( y == 'D' ){ cards[3][x] = 1; }
	}
	for( int i = 0; i < 4; i++){ for( int j = 1; j < 14; j++){ if( cards[i][j] == 0 ){
	if( i == 0 ) { cout << "S " << j << "\n"; }
	else if( i == 1 ) { cout << "H " << j << "\n"; }
	else if( i == 2 ) { cout << "C " << j << "\n"; }
	else if( i == 3 ) { cout << "D " << j << "\n"; }
	} } }

return 0;
}