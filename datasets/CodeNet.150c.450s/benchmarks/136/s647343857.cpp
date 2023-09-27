#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main(){
	long a, b, _a, _b, r;
	while( cin >> a >> b)
	{
		if( a < b ) swap(a, b);
		_a = a; _b = b;
		while( ( r = _a % _b ) != 0 ){
			_a = _b;
			_b = r;
		}
		cout << _b << " " << (a / _b) * b << "\n";
	}
	return 0;
}