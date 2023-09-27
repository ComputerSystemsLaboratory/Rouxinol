#include <cstdio>
#include <map>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define mp make_pair

int main() {
	while(1) {
		int n;
		scanf(" %d", &n);
		if(n == 0) break;
		map<char, char> data;
		rep(i,n) {
			char a, b;
			scanf(" %c %c", &a, &b);
			data.insert(mp(a, b));
		}
		scanf("%d", &n);
		rep(i,n) {
			char t;
			scanf(" %c", &t);
			if(data.find(t) == data.end()) {
				putchar(t);
			} else {
				putchar(data[t]);
			}
		}
		puts("");
	}
	return 0;
}