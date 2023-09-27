#include <list>
#include <cstdio>
using namespace std;
int Q, a, e; char c[14]; list<int> l;
int main() {
	scanf("%d", &Q);
	for(int i = 0; i < Q; i++) {
		scanf("%s", c);
		switch(c[0] + c[6]) {
		case 105: scanf("%d", &a), l.push_front(a); break;
		case 170: l.pop_front(); break;
		case 176: l.pop_back(); break;
		default:
			scanf("%d", &a);
			for(list<int>::iterator it = l.begin(); it != l.end(); it++) {
				if(*it == a) {
					l.erase(it); break;
				}
			}
		}
	}
	for(list<int>::iterator it = l.begin(); it != l.end(); it++) printf(e++ ? " %d" : "%d", *it);
	printf("\n");
}