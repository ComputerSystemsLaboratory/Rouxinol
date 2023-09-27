#include <iostream>
using namespace std;

int main(){
	int W, H;
	int x, y, r;
	cin >> W >> H >> x >> y >> r;
	
	if ( x - r < 0 ){
		cout << "No" << endl;
	}
	else if ( y - r < 0 ){
		cout << "No" << endl;
	}
	else if ( W - x < r ){
		cout << "No" << endl;
	}
	else if ( H - y < r ){
		cout << "No" << endl;
	} else {
		cout << "Yes" << endl;
	}
	
return 0;
}
