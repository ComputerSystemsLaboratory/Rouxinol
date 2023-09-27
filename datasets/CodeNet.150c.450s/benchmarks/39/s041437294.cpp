#include <cstdio>
using namespace std;
int in() { int x; scanf("%d", &x); return x; }
int main(){
	int a = in();
	int b = in();
	printf("%d %d\n", a*b, a*2+b*2);
	return 0;
}