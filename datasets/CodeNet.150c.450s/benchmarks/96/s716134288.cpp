#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

#define int long long

int N;
int last, cnt;

const string s[9] =
{
	".,!? ",
	"abc",
	"def",
	"ghi",
	"jkl",
	"mno",
	"pqrs",
	"tuv",
	"wxyz"
};

string Output(int n)
{
	string res;
	if (n == 0)
	{
		if (cnt > 0) res.push_back(s[last - 1][--cnt % s[last - 1].size()]);
		cnt = 0;
		return res;
	}
	last = n;
	cnt++;
	return "";
}

signed main()
{
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		string S, ans;
		cin >> S;
		for (int j = 0; j < S.size(); j++)
		{
			ans += Output(S[j] - '0');
		}
		cout << ans << endl;
	}
	return 0;
}