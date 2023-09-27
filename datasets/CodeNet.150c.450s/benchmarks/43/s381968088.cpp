#include<stdio.h>
int main(void){
	int x;
	scanf("%d",&x);
	while(x!=0){
		int at=0,bt=0;
		for(int i=1; i<=x; i++){
			int a=0,b=0;
			scanf("%d%d",&a,&b);
			if(a>b){
				at=at+a+b;
			}else if(a<b){
				bt=bt+a+b;
			}else{
				at+=a;
				bt+=b;
			}
		}
		printf("%d %d\n",at,bt);
		scanf("%d",&x);
	}
	return 0;
}