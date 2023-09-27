#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main(){
	int m; cin >> m;
	string s;
	for(int i=0; i<m; i++){
		cin >> s;
		set<string> ss;
		ss.insert(s);
		for(int j=1; j<s.size(); j++){
			string l = s.substr(0, j);
			string r = s.substr(j, s.size()-j);
			ss.insert(r+l);
			reverse(l.begin(), l.end());
			ss.insert(l+r);
			ss.insert(r+l);
			reverse(r.begin(), r.end());
			ss.insert(l+r);
			ss.insert(r+l);
			reverse(l.begin(), l.end());
			ss.insert(l+r);
			ss.insert(r+l);
		}
		cout << ss.size() << endl;
	}
}
