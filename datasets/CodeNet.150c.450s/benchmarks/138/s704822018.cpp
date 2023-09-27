#include <iostream>
using namespace std;
int main()
{
	int a, b, r;
	cin >> a >> b;
	if( a < b )
		swap(a , b);

	while( r = a % b ){
		a = b;
		b = r;
	}
	cout << b << "\n";

	return 0;
}