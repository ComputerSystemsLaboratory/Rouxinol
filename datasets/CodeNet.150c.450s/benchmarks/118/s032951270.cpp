#include<iostream>
using namespace std;

int n;
int y, m, d;

int main() {
	int i;
	cin >> n;
	for( i = 0; i < n; i++ ) {
		cin >> y >> m >> d;
		
		int j, k;
		int day = 0;
		for( j = y; j < 1000; j++ ) {
			if ( j == y ) {
				k = m;
			} else {
				k = 1;
			}
			for( ; k <= 10; k++ ) {
				if ( k % 2 || j % 3 == 0 ) {
					if ( j == y && k == m )
						day += 20 - d + 1;
					else
						day += 20;
				} else {
					if ( j == y && k == m )
						day += 19 - d + 1;
					else
						day += 19;
				}
			}
		}
		cout << day << endl;
	}
	return 0;
}