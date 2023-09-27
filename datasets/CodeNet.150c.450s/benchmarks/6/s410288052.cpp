#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a,b,c;
	cin >> a >> b >> c;
	if (a>=b) cout << "No";
	else if (b>=c) cout << "No";
	else if (a>=c) cout << "No";
	else cout << "Yes";
	cout << endl;
	return 0;
}