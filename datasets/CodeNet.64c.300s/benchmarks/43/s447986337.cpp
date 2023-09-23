#include <stdio.h>

int main(){
	int a,b,c,d,e,f,g,h,i,j;
		scanf("%d %d %d %d",&a,&b,&c,&d);
		scanf("%d %d %d %d",&e,&f,&g,&h);
		i=a+b+c+d;
		j=e+f+g+h;
		if(i==j){
			printf("%d\n",i);
		}else if(i<j){
			printf("%d\n",j);
		}else if(i>j){
			printf("%d\n",i);
		
	}
	return 0;
}