#include<stdio.h>
int main(){
	int a;
	int b;
	int c;
	int x;
	int y=1;
	int z;
	scanf("%d",&x);
		while(y<=x){
		scanf("%d",&a);
		scanf("%d",&b);
		scanf("%d",&c);
		if(c>=b){
			z=c;
			c=b;
			b=z;
		}
		if(a<=c){
			z=a;
			a=b;
			b=c;
			c=z;
		}
		else if(b>=a){
			z=b;
			b=a;
			a=z;
		}
	z=a*a-b*b-c*c;
	if(z==0)
		puts("YES");
	else
		puts("NO");
	y++;
	}
return(0);
}