#include <iostream>
#include  <stdio.h>
#include  <algorithm>
#include  <math.h>
#include  <vector>
#include  <string>
#include  <sstream>
#include  <numeric>
#include  <set>
#include <map>

#define rep(i, j) for(int i = 0; i < j; i++)
#define all(i) i.begin(), i.end()
#define ll long long

using namespace std;

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);

	int n = 0, m = 0; 
	while (cin >> n >> m && n != 0 && m != 0)
	{
		vector<int> a(n, 0), b(m, 0);
		vector<int> at(n, 0), bt(m, 0);
		rep(i, n) { cin >> a[i]; }
		rep(i, m) { cin >> b[i]; }
		int ans_a = 5690823, ans_b = 5690823;
		rep(i, n) rep(j, m)
		{
			int tmp = 0, tmp2 = 0;
			tmp = accumulate(all(a), 0) - a[i] + b[j];
			tmp2 = accumulate(all(b), 0) - b[j] + a[i];
			if (tmp == tmp2)
			{
				ans_a = min(a[i], ans_a); ans_b = min(b[j], ans_b);
			}
		}
		if (ans_a == 5690823 && ans_b == 5690823) { printf("-1\n");}
		else { printf("%d %d\n", ans_a, ans_b); }
	}
	return 0;
}