#include <cstdio>
#include <cstring>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)

bool ary[31];

int main() {
	memset(ary, -1, sizeof ary);
	rep(i, 28) {
		int t;
		scanf(" %d", &t);
		ary[t] = false;
	}
	for(int i = 1; i <= 30; i++) {
		if(ary[i])
			printf("%d\n", i);
	}
	return 0;
}