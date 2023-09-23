#include <cstdio>
using namespace std;
int in(){ int x; scanf("%d", &x); return x; }
int main(){
	int a = in(), b = in(), c = in();
	int cnt = 0;
	for(int x = a; x <= b; x++) if(c % x == 0) cnt++;
	printf("%d\n", cnt);
	return 0;
}