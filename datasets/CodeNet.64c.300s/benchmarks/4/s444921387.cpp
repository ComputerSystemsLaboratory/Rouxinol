#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
	int a,b,c;
	string ans;

	ans="No";
	cin >> a >> b >> c;
	if (a<b)
		if (b<c)
			ans="Yes";

	cout << ans << endl;
}

