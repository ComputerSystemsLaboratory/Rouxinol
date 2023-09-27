#include<iostream>

using namespace std;

int main() {

	int store[50];
	int pos;
	int move;

	int cnum;
	int snum;

	int stop = 0;
	for (;;) {
		cin >> cnum >> snum;

		if ( cnum == 0 ) break;

		pos = 0;
		move = snum;
		for ( int i=0; i<cnum; i++ ) {
			store[i] =0;
		}

		for ( int i=0;;i++) {
			if ( move > 0 ) {
				for ( int j=0; j<cnum; j++ ) {
				store[(i+j)%cnum]+=move/cnum;
				}
				for ( int j=0; j<(move%cnum);j++) {
					store[(i+j)%cnum]++;
				}
				i+=move-1;
				move = 0;
			}
			else {
				if ( store[i%cnum] == snum ) {
					pos = i % cnum;
					break;
				} else {
					move = store[i%cnum];
					store[i%cnum] = 0;
				}
			}
		}
		cout << pos << endl;
	}
}