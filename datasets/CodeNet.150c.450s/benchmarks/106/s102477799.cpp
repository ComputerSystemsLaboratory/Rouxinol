#include <iostream>
using namespace std;

int main()
{
	int a,b,c;
	int i = 0;
	int count = 0;

	cin >> a >> b >> c;

	while ((a + i) <= b) {
		if (c % (a + i) == 0) {
			count++;
		}
		else {
			//何もしない
		}
		i++;
	}

	cout << count << '\n';

	return 0;
}
