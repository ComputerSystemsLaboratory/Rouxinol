#include <iostream>
using namespace std;

int main() {
	int a,b,c,x;
	cin >> a >> b >> c;
	if(b < a){
		x = a;
		a = b;
		b = x;
	}
	if(b > c){
		x = b;
		b = c;
		c = x;
	}
	if(b < a){
		x = a;
		a = b;
		b = x;
	}
	cout << a << " " << b << " " << c << endl;
	return 0;
}