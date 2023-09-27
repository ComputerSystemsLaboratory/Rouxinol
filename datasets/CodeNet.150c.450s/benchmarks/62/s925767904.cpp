#include <iostream>
using namespace std;

int main(){

	int a, b, c, d;

	cin >> a >> b >> c;

	if (a >= b){
		d = a; a = b; b = d;
	}
	if (c <= a){
		d = c; c = a; a = d;
	}
	if (c >= a && c <= b){
		d = b; b = c; c = d;
	}


	cout << a << " " << b << " " << c << endl;



	return 0;
}