#include<stdio.h>
int main(void){
	int a,b,c,n,x;
	static int i=0;
	for(;;){
		scanf("%d %d",&n,&x);
	    if(n==0&&x==0){
			break;
		}else{
			for(a=1;a<=n;a++){
				for(b=1;b<=n;b++){
					for(c=1;c<=n;c++){
						if(a!=b&&b!=c&&c!=a){
						if(a+b+c==x){
							i++;
						}
						}
					}
				}
			}
			printf("%d\n",i/6);
			i=0;
		}
	}
	return 0;
}