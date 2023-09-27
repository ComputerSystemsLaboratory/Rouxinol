#include<stdio.h>
int main(void){
int n,x,i,y,c,kazu;

	
		for(;;){
		kazu=0;

		scanf("%d %d",&n,&x);
		if(n==0&&x==0){
			break;
		}
		for(i=1;i<=n;i++){

			for(y=1;y<=n;y++){

				for(c=1;c<=n;c++){
					if(i!=y&&y!=c&&c!=i){
					if(i+y+c==x){
						kazu++;
						}
					}
				}
				
			}
			
		}
			printf("%d\n",kazu/6);
		}
		return 0;
}