#include<iostream>
#define limit 10000

using namespace std;

int main () {
	while ( true ) {

		int N, A, B, C, X;

		
		int pic[100];

		int count = 0;
		int ans = -1;

		cin >> N >> A >> B >> C >> X;

		if ( N + A + B + C + X == 0 )
			break;


		int x;
		x = X;

		for ( int i=0; i<N; i++ ) {
			cin >> pic[i];
		}

		for ( int i=0; i<limit+1; i++ ) {

			if ( x == pic[count] ) {
				count++;
				ans = i;
			}

			if ( x + B == 0 && pic[count] != 0 )
				break;

			if ( count == N )
				break;

			x = ( A*x + B )%C;
			
		}

		if ( count != N )
			cout << -1 << endl;
		else
			cout << ans << endl;
	}
}