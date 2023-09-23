#include <stdio.h>
#include <math.h>

int main(void) {
	int i,c,n,hen[3];
	double h,a;
	scanf("%d",&n);
	
	for(i = 0; n > i; i++){
		scanf("%d%d%d",&hen[0], &hen[1], &hen[2]);
		for(c = 0; 3 > c; c++){
		if(hen[c]*hen[c] + hen[(c+1)%3] * hen[(c+1)%3] == hen[(c+2)%3]*hen[(c+2)%3]) {printf("YES\n");break;}
		}
		if(3 == c)printf("NO\n");
	}
	return 0;
}