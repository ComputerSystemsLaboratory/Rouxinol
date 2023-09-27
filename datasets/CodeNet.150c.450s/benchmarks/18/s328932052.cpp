#include<stdio.h>

int main(){
	
	int n,m=100000,s=0;
	
	scanf("%d",&n);
	
	for(int t=0;t<n;t++){
		
		m=m*1.05;
		
		if(m%1000!=0){
			s=m%1000;
			m=m+1000-s;
		}
		//printf("%d\n",m);
	}
	
	printf("%d\n",m);
	return 0;
}