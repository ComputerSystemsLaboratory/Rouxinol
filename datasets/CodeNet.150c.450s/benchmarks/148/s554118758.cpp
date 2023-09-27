#include<bits/stdc++.h>
using namespace std;


int main()
{
	int n; cin >> n;
	string s;
	map<string, int> m;
	while(cin >> s) m[s]++;
	for (auto x : {"AC", "WA", "TLE", "RE"})
		cout << x << " x " << m[x] << endl;
}

