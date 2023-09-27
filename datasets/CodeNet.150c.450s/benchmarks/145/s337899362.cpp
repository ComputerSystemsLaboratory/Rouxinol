#include <cstdio>
#include <map>
#include <string>
using namespace std;

map<string, int> m;

int main(){
	char buf[33];
	while (scanf("%s", buf, 33) != EOF) {
		if (m.find(buf) != m.end()) {
			m[buf] += 1;
		}
		else {
			m[buf] = 0;
		}
	}
	map<string, int>::iterator itr = m.begin();
	string sl, sc;
	int l, c;
	sl = sc = (*itr).first;
	c = (*itr).second;
	l = (*itr).first.size();
	while (++itr != m.end()) {
		if ((*itr).first.size() > l) {
			sl = (*itr).first;
			l = (*itr).first.size();
		}
		if ((*itr).second > c) {
			sc = (*itr).first;
			c = (*itr).second;
		}	
	}
	printf("%s %s\n", sc.c_str(), sl.c_str());

	return 0;
}