#include<stdio.h>
#include<math.h>

int main(){
	long long dan[32];
	int n,i;
	
	dan[0]=0;
	dan[1]=1;
	dan[2]=2;
	dan[3]=4;
	for(i=4;i<32;i++){
		dan[i]=dan[i-1]+dan[i-2]+dan[i-3];
	}
	for(i=0;i<32;i++){
		dan[i]=((dan[i]+9)/10+364)/365;
	}
	while(0<=scanf("%d",&n)){
		if(n==0)break;
		printf("%lld\n",dan[n]);
	}
	
	return 0;
}