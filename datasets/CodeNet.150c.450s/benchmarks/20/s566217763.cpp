#include <cstdio>
using namespace std;
int in(){ int x; scanf("%d", &x); return x; }
int main(){
	int watch = in();
	int h=watch/3600, m=(watch%3600)/60, s=(watch%3600)%60;
	printf("%d:%d:%d\n", h, m, s);
	return 0;
}