#include<cstdio>

int main(void){
	int n,i,j,k,m=0;
	int a[10000],b[10000];
	int x[5]={0},y[5]={0};
	while(true){
		scanf("%d",&n);
		if(n==0)break;
		
		for(i=0;i<n;i++){
			scanf("%d%d",&a[i],&b[i]);
			if(a[i]>b[i]){
				x[m]=x[m]+a[i]+b[i];
			}else if(a[i]<b[i]){
				y[m]+=a[i]+b[i];
			}else{
				x[m]+=a[i];
				y[m]+=b[i];
			}
		}
		
		
		m++;
	}
	
	for(i=0;i<m;i++){
		printf("%d %d\n",x[i],y[i]);
	}
		
	return 0;
}					
					
					
				