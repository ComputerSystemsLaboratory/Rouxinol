#include <iostream>
using namespace std;
int main(){
	int a, b, c;
	cin >> a >> b >>c;
	
	if ( a >= b ) cout << "No"  << endl;
	else if ( a >= c ) cout << "No"  << endl;
	else if ( b >= c ) cout << "No"  << endl;
	else cout << "Yes" << endl;
	
	return 0;
}
