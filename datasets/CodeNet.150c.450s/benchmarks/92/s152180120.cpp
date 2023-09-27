#include <iostream>

using namespace std;

int main()
{
	int n1, n2, s;

	while (cin >> n1 >> n2) {
		int cnt = 0;
		for (s = n1 + n2; s > 0; s /= 10) {
			cnt++;
		}
		cout << cnt << endl;
	}
	return 0;
}