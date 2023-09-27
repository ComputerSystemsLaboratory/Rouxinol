#include<iostream>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;

	if (a <= b && b <= c) {
		cout << a << " " << b << " " << c << "\n";
	}
	else if ( a >= c && b <= c){
		cout << b << " " << c << " " << a << "\n";
	}
	else if (a >= b && b >= c) {
		cout << c << " " << b << " " << a << "\n";

	}
	else if (a <= c && c <= b) {
		cout << a << " " << c << " " << b << "\n";
	}
	else if (b <= a && a <= c) {
		cout << b << " " << a << " " << c << "\n";
	}
	else {
		cout << c <<" " <<  a << " "<< b << "\n";
	}
	return 0;
}