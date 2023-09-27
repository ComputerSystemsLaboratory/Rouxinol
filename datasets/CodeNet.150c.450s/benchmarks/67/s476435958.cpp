#include<stdio.h>
int main(){
	int n;
	while(1){
		
		scanf("%d",&n);
		if(n==0)break;
		int i,j,cnt1=0,cnt2=1;
		for(i=0;i<n-2;i++){
			for(j=cnt2;j<n;j++){
				
				if((j*(j+1)-i*(i+1))==n*2){
					cnt1++;
					cnt2++;
					break;
					
				}
				if((j*(j+1)-i*(i+1))>n*2){
					cnt2++;
					break;
				}
			}
		}
		printf("%d\n",cnt1);
	}
	return 0;
}