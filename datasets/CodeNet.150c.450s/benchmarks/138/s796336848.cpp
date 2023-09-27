#include <iostream>
using namespace std;

int main(){
	int x, y, z;
	cin >> x >> y;
	if(x > y){
		z = x;
		x = y;
		y = z;
	}
	
	while(1){
		z = x%y;
		if(z == 0)
			break;
		x = y;
		y = z;
	}
	
	cout << y << endl;
	
	return 0;
}