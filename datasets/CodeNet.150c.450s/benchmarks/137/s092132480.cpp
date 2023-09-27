/*
Haskell???TLE????????????C++??§????????????

URL: http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_4_C&lang=jp
?????????: Search - Dictionary
????\???????: 19:48:20-

*/
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <set>
#include <string>
using namespace std;

set<string> g;

int main()
{
	int n;
	cin >> n;
	for(int i=0; i<n; i++) {
		string a,b;
		cin >> a >> b;
		if(a == "insert") {
			g.insert(b);
		} else {
			cout << (g.count(b) ? "yes" : "no") << endl;
		}
	}
}