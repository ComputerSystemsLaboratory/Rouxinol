#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main( void )
{
	string rstr;
	cin >> rstr;
	reverse( rstr.begin(), rstr.end() );
	cout << rstr << endl;
	return 0;
}