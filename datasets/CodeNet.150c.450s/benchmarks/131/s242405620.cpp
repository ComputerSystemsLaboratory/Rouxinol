#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <algorithm>
#include <cstdlib>
#include <sstream>
#include <map>
using namespace std;

int main() {
	string a;
	int L;
	while(cin >> a >> L) {
		int mn, mx;
		int cnt = 0;
		map<int,int> s;
		if(a == "0" && L == 0) break;
		while(s.find(atoi(a.c_str())) == s.end()) {
			stringstream sstr;
			s[atoi(a.c_str())] = cnt++;
			while(a.size() < L)
				a += "0";
			sort(a.begin(), a.end());
			mn = atoi(a.c_str());
			sort(a.rbegin(), a.rend());
			mx = atoi(a.c_str());
			sstr << mx - mn;
			sstr >> a;
		}
		cout << s[atoi(a.c_str())] << " " << a
			<< " " << cnt - s[atoi(a.c_str())] << endl;
	}
}