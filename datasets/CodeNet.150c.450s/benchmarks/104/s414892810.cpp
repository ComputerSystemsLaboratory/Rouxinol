#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

int main() {
	int amd[31];
	int w,n; scanf("%d%d", &w, &n);
	for(int i = 1; i <= w; i++) amd[i]=i;
	for(int i = 0; i < n; i++) {
		int a,b; scanf("%d,%d", &a, &b);
		swap(amd[a], amd[b]);
	}
	for(int i = 1; i <= w; i++) printf("%d\n",amd[i]);
	return 0;
}