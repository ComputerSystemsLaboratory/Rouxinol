#include <stdio.h>

int main(void){
int i,a,b,c,m;
scanf("%d %d %d",&a,&b,&c);
for(i=1;i<=10;++i){
		if(a>b){
			m=a,a=b,b=m;
		}
		if(b>c){
			m=b,b=c,c=m;
		}
	}
printf("%d %d %d\n" , a,b,c);
  return 0;
}