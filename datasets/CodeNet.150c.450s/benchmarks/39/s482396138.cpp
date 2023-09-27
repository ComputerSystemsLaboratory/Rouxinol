#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int a, b;
	int s, l;

	cin >> a >> b;

	s = a * b;
	l = 2 * (a + b);

	cout << s << " " << l << endl;
	return 0;
}