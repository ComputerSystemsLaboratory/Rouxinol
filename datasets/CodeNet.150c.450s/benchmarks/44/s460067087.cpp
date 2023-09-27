#include <iostream>
using namespace std;

int main(){
	int A[4], B[4];
	while( cin >> A[0] >> A[1] >> A[2] >> A[3], cin >> B[0] >> B[1] >> B[2] >> B[3] ){
		int hit = 0, blow = 0;
		bool check[10] = {false};
		//cin >> A[0] >> A[1] >> A[2] >> A[3];
		//cin >> B[0] >> B[1] >> B[2] >> B[3];
		for( int i=0; i<4; i++ ) if( A[i] == B[i] ) hit++;
		for( int i=0; i<4; i++) check[A[i]] = true;
		for( int i=0; i<4; i++ ) if( A[i] != B[i] && check[B[i]] ) blow++;
		cout << hit << " " << blow << endl;
	}
}