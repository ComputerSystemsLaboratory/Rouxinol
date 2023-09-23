#include<stdio.h>
#include<string.h>

int main(){
	int n,i,s;
	
	while(~scanf("%d",&n)){
		if(n==0)break;
		
		s=0;
		for(i=2;n*2>=i*i;i++){
			if(i%2==1 && (double)n/i==n/i){
				++s;
				continue;
			}
			if(i%2==0 && (double)n/i-n/i==0.5){
				++s;
				continue;
			}
		}
		printf("%d\n",s);
	}
	return 0;
}