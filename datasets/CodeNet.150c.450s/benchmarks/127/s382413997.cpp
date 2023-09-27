#include <bits/stdc++.h>
using namespace std;

#define pb         push_back

const int INF = 100000000;

int main(void) {
	int m;
	cin >> m;
	for(int i=0; i<m; i++){
		string s;
		cin >> s;
		set<string> sset;
		string sr = s;
		reverse(s.begin(), s.end());
		for(int i=0; i<s.size() - 1; i++){
			string s1 = s.substr(0, i+1);
			string s2 = s.substr(i+1);
			string s1r = sr.substr(sr.size() - (i+1));
			string s2r = sr.substr(0, sr.size() - (i+1));
			
			sset.insert(s1 + s2);
			sset.insert(s1r + s2);
			sset.insert(s1 + s2r);
			sset.insert(s1r + s2r);

			sset.insert(s2 + s1);
			sset.insert(s2r + s1);
			sset.insert(s2 + s1r);
			sset.insert(s2r + s1r);
		}
		cout << sset.size() << endl;
	}
	
	return 0;
}