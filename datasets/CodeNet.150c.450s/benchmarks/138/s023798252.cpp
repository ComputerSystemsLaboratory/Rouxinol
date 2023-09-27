#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	int x, y;
	int ma, mi;

	cin >> x >> y;
	ma = max(x, y);
	mi = min(x, y);

	while (ma != mi){
		int t = ma % mi;
		ma = max(t, mi);
		mi = min(t, mi);
		if (ma % mi == 0) break;
	}
	cout << mi << endl;

	return 0;
}