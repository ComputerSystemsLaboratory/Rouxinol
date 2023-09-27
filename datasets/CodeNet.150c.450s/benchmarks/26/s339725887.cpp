#include <iostream>

using namespace std;
typedef long long int lint;

void answer()
{
	int a, b;
	cin >> a >> b;
	if (a < b) cout << "a < b";
	else if (a > b) cout << "a > b";
	else cout << "a == b";
	cout << endl;
}

int main()
{
	answer();
	return 0;
}