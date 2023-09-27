#include<stdio.h>

int main(){
	int ri[100],a,b,c,x,n,f,i,j,r;
	
	while(0<=scanf("%d%d%d%d%d",&n,&a,&b,&c,&x)){
		if(n==0)break;
		
		for(i=0;i<n;i++){
			scanf("%d",&ri[i]);
		}
		
		r=0;
		f=0;
		while(f<=10000){
			if(x==ri[r]){
				++r;
				if(r==n)break;
			}
			++f;
			x=(a*x+b)%c;

		}
		
		if(f>10000){
			printf("-1\n");
		}else{
			printf("%d\n",f);
		}
	}
	return 0;
}