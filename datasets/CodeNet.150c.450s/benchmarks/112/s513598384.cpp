#include <cstdio>
#include <map>
#include <algorithm>
using namespace std;

int main() {
	for(;;) {
		int n;
		scanf(" %d", &n);
		if(n == 0) break;
		map<char, char> m;
		for(int i = 0; i < n; i++) {
			char from, to;
			scanf(" %c %c", &from, &to);
			m.insert(make_pair(from, to));
		}
		scanf(" %d", &n);
		for(int i = 0; i < n; i++) {
			char c;
			scanf(" %c", &c);
			if(m.find(c) != m.end())
				putchar(m[c]);
			else
				putchar(c);
		}
		puts("");
	}
	return 0;
}