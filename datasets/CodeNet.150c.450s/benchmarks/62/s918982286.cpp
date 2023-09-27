#include <iostream>

using namespace std;

int a = 0, b = 0, c = 0, tmp = 0;

int main()
{
	cin >> a >> b >> c;

	if ( a > b ){
	
		tmp = a;
		a = b;
		b = tmp;
	};

    if ( b > c ){

		tmp = b;
		b = c;
		c = tmp;
	};

	if ( a > b ){

		tmp = a;
		a = b;
		b = tmp;
	};
	
	cout <<a<<" "<<b<<" "<<c<<endl;

	return 0;
}