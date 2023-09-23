#include <algorithm>
#include <cstdio>
using namespace std;
int in(){ int x; scanf("%d", &x); return x; }
int main(){
	int a[3];
	for(int i = 0; i < 3; i++) a[i] = in();
	sort(a, a + 3);
	for(int i = 0; i < 3; i++) printf("%d%s", a[i],i<2?" ":"\n");
	return 0;
}