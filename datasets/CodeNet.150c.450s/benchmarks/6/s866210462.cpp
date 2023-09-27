#include <iostream>
using namespace std;

int main() {
	int x;
	int y;
	int z;
	
	cin >> x;
	cin >> y;
	cin >> z;
	
	if(x<y && y<z) {
		cout << "Yes" << endl;
	}
	else if(x>y || x>z || y>z ){
		cout << "No" << endl;
	}
	else {
		cout << "No" << endl;
	}
	
	return 0;
}