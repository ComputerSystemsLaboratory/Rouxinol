#include<iostream>
#include<iomanip>
#include<algorithm>
#include<bitset>
#include<cctype>
#include<climits>
#include<cmath>
#include<cstdio>
#include<deque>
#include<list>
#include<map>
#include<set>
#include<stack>
#include<string>
#include<sstream>
#include<queue>
#include<vector>
using namespace std;

int main() {
	int a['z' + 1] = {};
	for (string s; cin >> s;)
		for (int i = 0; i < s.size(); i++)
			a[s[i]]++;

	for (char c = 'a'; c <= 'z'; c++) 
		cout << c << " : " << a[c] + a[c - 32] << endl;

	return 0;
}