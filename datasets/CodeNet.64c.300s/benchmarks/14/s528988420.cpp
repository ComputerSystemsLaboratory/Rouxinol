#include <cstdio>
using namespace std;
int in(){ int x; scanf("%d", &x); return x; }
int main(){
	int a=in();
	int b=in();
	if(a < b) printf("a < b\n");
	else if(a > b) printf("a > b\n");
	else printf("a == b\n");
	return 0;
}