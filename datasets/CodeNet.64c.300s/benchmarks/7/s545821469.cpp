#include<iostream>
using namespace std;

int main() {
	char s;
	int n,a[4][13 + 1] = {0};
	int num;
	
	cin >> n;
	for ( int i = 0; i < n; i++ ) {
		cin >> s >> num;
		num = num - 1;
		if ( s == 'S' ) a[0][num]++;
		else if ( s == 'H' ) a[1][num]++;
		else if ( s == 'C' ) a[2][num]++;
		else if ( s == 'D' ) a[3][num]++;
	}
	for ( int i = 0; i < 4; i++ ) {
		for ( int j = 0; j < 13; j++ ) {
			if ( i == 0 ) s = 'S';
			if ( i == 1 ) s = 'H';
			if ( i == 2 ) s = 'C';
			if ( i == 3 ) s = 'D';
			
			if ( a[i][j] == 0 ) {
				cout << s << " " << j + 1 << endl;
			} 
		}
	}
	
}
