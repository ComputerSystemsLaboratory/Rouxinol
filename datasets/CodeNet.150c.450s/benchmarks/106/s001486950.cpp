#include <iostream>
using namespace std;

int main()
{
	int a, b, c, n=0;

	cin >> a >> b >> c;
	
	do {
		( c % a++ ) || n++;
 	} while (a <= b);
	
	cout << n << endl;

	return 0;
}