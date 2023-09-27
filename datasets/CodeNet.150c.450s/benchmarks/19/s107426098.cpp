#include <bits/stdc++.h>
using namespace std;
int main()
{
	int x[2];
	while (cin >> x[0], cin >> x[1], !(x[0] == 0 && x[1] == 0))
	{
		sort(x, x + 2);
		cout << x[0] << " " << x[1] << "\n";
	}
	return 0;
}