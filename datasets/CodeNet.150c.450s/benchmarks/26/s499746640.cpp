#include <iostream>

using namespace std;

int main()
{
	int a,b,c;
	cin >> a >> b;

	c = a - b;

	if (c == 0) cout << "a == b" << endl;
	else if (c < 0) cout << "a < b" << endl;
	else cout << "a > b" << endl;

	return 0;
}