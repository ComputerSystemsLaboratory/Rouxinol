#include <cstdio>

using namespace std;

int main() {
	while(true) {
		int a,b,c,d,e,f;
		if(scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f)<6)break;
		// adx + bdy = cd
		// adx + aey = af
		// (bd-ae)y = cd-af
		int y = (c*d-a*f)*2000/(b*d-a*e);
		// aex + bey = ce
		// bdx + bey = bf
		// (ae-bd)x = ce-bf
		int x = (c*e-b*f)*2000/(a*e-b*d);
		if(x >= 0) {
			x = (x+1)/2;
			printf("%d.%03d ",x/1000, x%1000);
		} else {
			x = (-x+1)/2;
			printf("-%d.%03d ",x/1000, x%1000);
		}
		if(y >= 0) {
			y = (y+1)/2;
			printf("%d.%03d\n",y/1000, y%1000);
		} else {
			y = (-y+1)/2;
			printf("-%d.%03d\n",y/1000, y%1000);
		}
	}
	return 0;
}