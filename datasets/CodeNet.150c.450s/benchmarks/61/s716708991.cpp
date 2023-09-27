#include <iostream>
#include <vector>
using namespace std;
int main(){
	int N, A, B, C, X;
	while( 1 ){
		cin >> N >> A >> B >> C >> X;
		if( !N && !A && !B && !C && !X ) break;
		vector<int> Y(N);
		for( int i = 0; i < N; i++ ){
			cin >> Y[i];
		}
		int frame = 0;
		int i = 0;
		while( 1 ){
			if( Y[i] == X ){
				i++;
				if( i == N ) break;
			}
			X = ( A * X + B ) % C;
				//cout << X << ' ' << frame << endl;
			if( frame == 10000 ){
				frame = -1;
				goto end;
			}
			frame++;
			/*if( i == N ) break;
			if( Y[i] == X ){
				X = ( A * X + B ) % C;
				frame++;
			}*/
		}
		Y.clear();
	end:
		cout << frame << endl;
	}
}