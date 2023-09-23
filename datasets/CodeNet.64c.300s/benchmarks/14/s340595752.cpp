#include <iostream>
#include <string>
using namespace std;

int main(void){
	int a,b;
	cin >> a >> b;
	string s;
	if( a < b )s = "a < b";
	else if( a == b )s = "a == b";
	else s = "a > b";
	cout << s << "\n";
	return 0;

}
