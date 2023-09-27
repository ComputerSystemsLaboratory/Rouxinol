#include <stdio.h>

int max(int a,int b);

int main(void){

	double ulim,sum;
	int i,j,k;
	int count=0;
	double tulim[2];
	
	while(1){
		count=0;
		
		scanf("%lf",&ulim);
		scanf("%lf",&sum);
		
		if(ulim==0&&sum==0){
			break;
		}
		
		tulim[0]=max(ulim,sum/3);
		
		for(i=1;i<tulim[0];i++){
		
			tulim[1]=max((sum-i)/2,ulim);
		
			for(j=i+1;j<tulim[1];j++){
				k=sum-i-j;
				if(k>j && k<=ulim){
					count++;
					/* printf("%d %d %d\n",i,j,k); */
				}
			}
		}
		
		printf("%d\n",count);
		
	}
	
	
	return 0;
}

int max(int a,int b){
	if(a>=b){
		return a;
	}else{
		return b;
	}
}