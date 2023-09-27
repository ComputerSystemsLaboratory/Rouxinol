#include<stdio.h>
int main(void){
	int x,y,z,p,c,t;
	t=0;
	c=0;
			scanf("%d %d %d",&x,&y,&z);
		for(p=0;c<y;p++){
			c=x;
			c+=p;
			if(z%c==0){
			t++;
}}
	printf("%d\n",t);
	return 0;
}