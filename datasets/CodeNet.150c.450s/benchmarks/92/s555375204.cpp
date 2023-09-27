#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int a, b;
	while (cin >> a >> b)
		cout << to_string(a + b).size() << endl;

	return 0;
}