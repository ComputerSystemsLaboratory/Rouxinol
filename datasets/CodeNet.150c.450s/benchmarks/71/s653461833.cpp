#include <stdio.h>

int sumInts(int n,int i);

int main(){
	int n;
	
	while(scanf("%d",&n)!=EOF){
		printf("%d\n",sumInts(n,4));
	}
	
	return 0;
}

int sumInts(int n,int i){
	int j,sum=0;
	if(i==1){
		if(n>9){
			sum=0;
		}else if(n<0){
			fprintf(stderr,"error\n");
		}else{
			sum=1;
		}
	}else{
		for(j=0;j<=9;j++){
			if (n<j) break;
			sum+=sumInts(n-j,i-1);
		}
	}
	
	
	return sum;
}