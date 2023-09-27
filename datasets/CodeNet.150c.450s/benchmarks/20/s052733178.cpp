#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int s;
	cin >> s;
	int h, m;
	m = s/60;
	h = m/60;
	s %= 60;
	m %= 60;
	cout << h << ':' << m << ':' << s << endl;
	return 0;
}
