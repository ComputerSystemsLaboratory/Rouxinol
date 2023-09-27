#include <iostream>
using namespace std;

int main(){
	int i, h, m[3] = {};
	for(i = 0; i < 10; ++i){
		cin >> h;
		if( m[2] >= h )
			continue;
		else if( m[1] >= h )
			m[2] = h;
		else if( m[0] >= h ){
			m[2] = m[1];
			m[1] = h;
		}else{
			m[2] = m[1];
			m[1] = m[0];
			m[0] = h;
		}
	}

	cout << m[0] << "\n" << m[1] << "\n" << m[2] << "\n";
	
	return 0;
}