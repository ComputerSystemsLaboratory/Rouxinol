 #include <iostream>
using namespace std;
	int main(){
		int x,y;
		y = 0;
		while ( 1 ){
			cin >> x;
			if ( x == 0 ) break;
			y = y + 1;
			cout << "Case" << " " << y << ":" << " " << x << endl;
		}
	}