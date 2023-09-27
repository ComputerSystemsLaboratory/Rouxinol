#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <set>
using namespace std;
#define rep2(x,from,to) for(int x=(from); x<(to); (x)++)
#define rep(x,to) rep2(x,0,to)
int main() {
	string s;
	vector<string> str1;
	set<string> str2;
	while(cin >> s) {
		str1.push_back(s);
		str2.insert(s);
	}
	int w = 0;
	string ret;
	rep(i,str1.size()) {
		if(w < str1[i].length()) {
			w = str1[i].length();
			ret = str1[i];
		}
	}

	int cnt[1000];
	rep(i,1000) {
		cnt[i] = 0;
	}
	int c = 0;
	for(auto it=str2.begin(); it != str2.end(); ++it) {
		rep(j,str1.size()) {
			if(*it == str1[j]) cnt[c]++;
		}
		c++;
	}
	int max = 0, r = 0;
	string ret2;
	for(auto it=str2.begin(); it != str2.end(); ++it) {
		if(max < cnt[r]) {
			max = cnt[r];
			ret2 = *it;
		}
		r++;
	}
	cout << ret2 << " " << ret<< endl;
	return 0;
}