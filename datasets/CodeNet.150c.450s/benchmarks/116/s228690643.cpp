#include<stdio.h>


int main(){
	
	int n,m;
	int input[100000];
	int cont;
	int now;
	int max;
	int i;
	while(1){
		
		scanf("%d%d",&n,&m);
		if(n==0 && m ==0){
			break;
		}
		
		for(i=0;i<n;i++){
			scanf("%d",&input[i]);
		}
		
		now = 0;
		
		for(i=0;i<m;i++){
			now += input[i];
		}
		max=now;
		
		cont = m;
		
		for(i=m;i<n;i++){
			now-=input[i-m];
			now+=input[i];
			
			if(now>max){
				max=now;
			}
		}
		
		printf("%d\n",max);
	}
	
	return 0;
}