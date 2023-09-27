#include <stdio.h>

int n;
int x, y, s, answer;
double X, Y, P1, P2;

int main(void){
	int i, j, p;
	for (;;){
		scanf("%d %d %d", &x, &y, &s);
		if (x+y+s==0) break;
		answer=0;
		P1=(double)x/100;
		P2=(double)y/100;
		for (i=1;i<=1000;i++){
			for (j=1;j<=1000;j++){
				
				X=(double)i, Y=(double)j;
				X*=(1.0+P1), Y*=(1.0+P1);
				p=(int)(X+0.00000000001)+(int)(Y+0.00000000001);
				if (p==s){
					X=(double)i, Y=(double)j;
					X*=(1.0+P2), Y*=(1.0+P2);
					p=(int)(X+0.00000000001)+(int)(Y+0.00000000001);
					if (p>answer){
						answer=p;
					}
				}
			}
		}
		printf("%d\n", answer);
	}
	return false;
}