#include <iostream>
#include <string>

using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;

	string str = ((a < b) && (b < c)) ? ("Yes") : ("No");
	cout << str << endl;


	return 0;
}
