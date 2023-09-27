#include <iostream>
#include <stdio.h>

using namespace std;
typedef long long int lint;

void answer()
{
	int a, b, c, ans;
	ans = 0;
	cin >> a >> b >> c;
	for (int i = a; i <= b; i++) {
		if (c % i == 0) ans++;
	}
	cout << ans << endl;
}

int main()
{
	answer();
	return 0;
}