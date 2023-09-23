#include <iostream>
using namespace std;

static const int MAX_R = 13;
static const int MAX_N = 52;

int main()
{

	int  N, num;
	char card;
	bool S[MAX_R], H[MAX_R], C[MAX_R], D[MAX_R];

	for( int i = 0; i < MAX_R; i++ ) {

		S[i] = false;
		H[i] = false;
		C[i] = false;
		D[i] = false;

	}

	cin >> N;
	for( int i = 0; i < N; i++ ) {

		cin >> card >> num;
		if( card == 'S' ) S[num - 1] = true;
		else if( card == 'H' ) H[num - 1] = true;
		else if( card == 'C' ) C[num - 1] = true;
		else D[num - 1] = true;

	}

	for( int i = 0; i < 4; i++ ) {
		for( int j = 0; j < MAX_R; j++ ) {

			if( i == 0 ) {
				if( !S[j] ) cout << "S " << j + 1 << endl;
			}
			else if( i == 1 ) {
				if( !H[j] ) cout << "H " << j + 1 << endl;
			}
			else if( i == 2 ) {
				if( !C[j] ) cout << "C " << j + 1 << endl;
			}
			else if( i == 3 ) {
				if( !D[j] ) cout << "D " << j + 1 << endl;
			}

		}
	}

	return 0;

}