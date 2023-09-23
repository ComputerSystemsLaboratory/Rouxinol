
#include <iostream>

using namespace std;

int a, b, c, x, y, z;

int main(){

	cin >> a >> b >> c;

	if (a > b){
		
		x = a;
		z = b;
	}
	else{

		x = b;
		z = a;
	}

	if (c > x){

		y = x;
		x = c;
	}
	else if (c > z){

		y = c;
	}
	else{
		y = z;
		z = c;

	}



	cout << z << " " << y << " " << x << endl;

}



