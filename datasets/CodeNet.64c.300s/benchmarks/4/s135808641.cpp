#include <iostream>

using namespace std;
typedef long long int lint;

void answer()
{
	int a, b, c;
	cin >> a >> b >> c;
	if (a < b && b < c) cout << "Yes";
	else cout << "No";
	cout << endl;
}

int main()
{
	answer();
	return 0;
}