#include <bits/stdc++.h>
using namespace std;

int n, s;

int Comb(int N, int start, int s)
{
	int ret = 0;

	if (s < 0)
		return 0;

	if (N == n)
		if (start == s)
			return 1;
		else
			return 0;

	for (int i = start + 1; i <= 9; ++i)
		ret += Comb(N + 1, i, s - start);
	return ret;
}

int main(){

	vector<int> RET;
	while (cin >> n >> s && (n != 0 || s != 0))
	{
		int ret = 0;
		for (int i = 0; i <= 9; ++i)
			ret += Comb(1, i, s);
		RET.push_back(ret);
	}
	for (int i = 0; i < RET.size(); i++) {
		cout << RET[i] << endl;
	}
	return 0;
}