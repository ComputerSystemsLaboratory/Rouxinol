#include <cstdio>
#include <algorithm>
#include <cmath>
#include <climits>
using namespace std;

int main() {
	while(true) {
		int a[10],b[10],h,bl;
		fill(a,a+10,0);
		fill(b,b+10,0);
		h=bl=0;
		int a1,a2,a3,a4,b1,b2,b3,b4;
		if(scanf("%d%d%d%d%d%d%d%d",&a1,&a2,&a3,&a4,&b1,&b2,&b3,&b4)<8)break;
		if(a1==b1)h++;
		if(a2==b2)h++;
		if(a3==b3)h++;
		if(a4==b4)h++;
		a[a1]++;
		a[a2]++;
		a[a3]++;
		a[a4]++;
		b[b1]++;
		b[b2]++;
		b[b3]++;
		b[b4]++;
		for(int i = 0; i < 10; i++) bl+=min(a[i],b[i]);
		printf("%d %d\n",h,bl-h);
	}
	return 0;
}