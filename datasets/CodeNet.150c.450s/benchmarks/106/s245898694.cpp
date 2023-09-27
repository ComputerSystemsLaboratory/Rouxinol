#include <iostream>

using namespace std;

int a, b, c;
int num = 0;
int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	cin >> a >> b >> c;

	for (int i = a; i <= b; i++) {
		if (c % i == 0) {
			num++;
		}
	}
	cout << num << "\n";
	return 0;
}