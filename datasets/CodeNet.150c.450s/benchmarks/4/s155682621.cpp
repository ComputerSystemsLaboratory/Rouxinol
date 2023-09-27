#include <iostream>
using namespace std;

int main(void){
	int m, f, r;
	while(cin >> m >> f >> r && !(m == -1 && f == -1 && r == -1)){
		int total_mf;
		if( m == -1 || f == -1 ) cout << "F" << endl;
		else{
			total_mf = m + f;
			if( total_mf >= 80 ) cout << "A" << endl;
			if( 65 <= total_mf && total_mf < 80 ) cout << "B" << endl;
			if( 50 <= total_mf && total_mf < 65 ) cout << "C" << endl;
			if( 30 <= total_mf && total_mf < 50 ){
				if( r >= 50 ) cout << "C" << endl;
				else cout << "D" << endl;
			}
			if( total_mf < 30 ) cout << "F" << endl;
		}
	}

	return 0;
}