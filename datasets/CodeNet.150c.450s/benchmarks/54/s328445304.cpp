#include <iostream>
#include <cstdio>
#define _USE_MATH_DEFINES
#include <math.h>
#include <vector>
#include <string>
#include <ctype.h>

using namespace std;

void solve()
{
	int ans = 0;
	string W, T;
	cin >> W;
	for (int i = 0; i < W.size(); ++i)
	{
		W[i] = tolower(W[i]);
	}
	while (cin >> T)
	{
		if (T == "END_OF_TEXT")
		{
			break;
		}
		for (int i = 0; i < T.size(); ++i)
		{
			T[i] = tolower(T[i]);
		}
		if (W == T)
		{
			++ans;
		}
	}
	cout << ans << endl;
}

int main()
{
	solve();
	return(0);
}