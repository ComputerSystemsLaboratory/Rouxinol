#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

int main() {
	int s[10];
	int ss = 0;
	while(true) {
		int x;
		if(scanf("%d", &x)<1)break;
		if(x==0) {
			printf("%d\n",s[--ss]);
		} else {
			s[ss++]=x;
		}
	}
	return 0;
}