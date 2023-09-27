#include <iostream>
#include <algorithm>
#include <cstdio>
#include <list>
#include <stack>
#include <vector>
#include <map>
#include <set>
using namespace std;


int main()
{
	//freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
	set<int> s;
	int n, m;
	cin >> n;
	while (n--)
	{
		scanf("%d", &m);
		s.insert(m);
	}
	cin >> m;
	int ans = 0;
	while (m--)
	{
		scanf("%d", &n);
		if (s.find(n) != s.end())
			++ans;
	}
	cout << ans << endl;
	return 0;
}