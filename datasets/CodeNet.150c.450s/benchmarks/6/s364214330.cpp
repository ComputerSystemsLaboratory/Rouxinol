#include <iostream>
#include <string>
using namespace std;

int main(void){
	int a,b,c;
	cin >> a >> b >> c;
	string s;
	if( a < b && b < c)s = "Yes";
	else s = "No";
	cout << s << "\n";
	return 0;

}
