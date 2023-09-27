#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c,count;
	while(scanf("%d %d",&a,&b)!=EOF){
		count=0;
		c=a+b;
		//printf("%d %d\n",a,b);
		while(c){
			c=c/10;
			count++;
		}
		printf("%d\n",count);
	}
	return 0;
}