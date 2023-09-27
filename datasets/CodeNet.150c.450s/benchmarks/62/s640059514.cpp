#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;

	if (a < b) {
		if (b < c) {
			cout << a << ' ' << b << ' ' << c << endl;
		}
		else if(c < a){
			cout << c << ' ' << a << ' ' << b << endl;
		}
		else {
			cout << a << ' ' << c << ' ' << b << endl;
		}
	}
	else {
		if (a < c) {
			cout << b << ' ' << a << ' ' << c << endl;
		}
		else if(c < b){
			cout << c << ' ' << b << ' ' << a << endl;
		}
		else {
			cout << b << ' ' << c << ' ' << a << endl;
		}
	}

    return 0;
}