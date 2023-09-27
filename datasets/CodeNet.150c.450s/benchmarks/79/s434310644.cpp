#include<stdio.h>

int main(){
	int a[52],b[52],p,c,i,j,n,r;
	while(1){
		scanf("%d %d",&n,&r);
		if(n==0&&r==0)break;
		for(i=1;i<=n;i++)a[i-1]=n-i+1;
		while(r--){
			//for(i=0;i<n;i++)printf("%d ",a[i]);
			//printf("\n");
			scanf("%d %d",&p,&c);
			for(i=0;i<c;i++)b[i]=a[p+i-1];
			for(i=p-2;i>=0;i--)a[i+c]=a[i];
			for(i=0;i<c;i++)a[i]=b[i];
		}
		printf("%d\n",a[0]);
	}
	return 0;
}