#include <iostream>
using namespace std;

typedef struct{
	int x;
	int y;
}t_swap;

int main(){
	int m, n;
	char c;

	cin >> m;
	cin >> n;
	int* w = new int[ m + 1 ];
	t_swap* swap = new t_swap[ n ];

	for ( int i = 0; i < n; ++i ){
		cin >> swap[ i ].x >> c >> swap[ i ].y;
	}

	for ( int i = 0; i < m + 1; ++i ){
		w[ i ] = i;
	}

	for ( int i = 0; i < n; ++i ){
		int t = w[ swap[ i ].x ];
		w[ swap[ i ].x ] = w[ swap[ i ].y ];
		w[ swap[ i ].y ] = t;
	}

	for ( int i = 1; i < m + 1; ++i ){
		cout << w[ i ] << endl;
	}


	delete[] swap;
	delete[] w;

	return 0;
}