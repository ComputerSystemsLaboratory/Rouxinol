#include <iostream>
#include <fstream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <string>
#include <map>
#include <queue>
#include <algorithm>

#define REP(i,n) for(int i=0; i<n; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)

using namespace std;

int main(void) {	
	int n;
	map<char, char> m;
	while (cin >> n && n > 0) {
		m.clear();
		REP(i, n) {
			char c1, c2;
			cin >> c1 >> c2;
			m[c1] = c2;
		}
		cin >> n;
		REP(i, n) {
			char c;
			cin >> c;
			if (m.find(c) == m.end())
				cout << c;
			else
				cout << m[c];
		}
		cout << endl;
		
	}
	
				  
	return 0;
}