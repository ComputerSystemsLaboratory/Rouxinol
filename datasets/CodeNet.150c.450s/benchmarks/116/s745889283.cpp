#include<stdio.h>
int main(void)
{
	int n,k,max=0,s,i,j,a[100001];
	while(1){
		scanf("%d%d",&n,&k);
		if(n==0&&k==0) break;
		for(i=1;i<=n;i++) scanf("%d",&a[i]);
		for(i=1;i<=n;i++){
			s=0;
			if(i+k<=n){
				for(j=i;j<i+k;j++) s+=a[j];
				if(max<s) max=s;
			}
		}
		printf("%d\n",max);
	}
	return 0;
}	