#include <iostream>
using namespace std;

int main() {
	int a,b;
	cin >> a >> b;
	char* s;
	if(a==b) s= "a == b";
	if(a < b) s= "a < b";
	if(a > b) s= "a > b";
	
	cout << s << endl;
	// your code goes here
	return 0;
}