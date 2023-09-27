#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>
  
int main()
{
	int n,m;
	int p[51]={0};
	int c[51]={0};
	int i;
	int ans;

	while(1)
	{
	scanf("%d %d",&n,&m);
	if((n==0)&&(m==0))
		break;
	ans=n;

	for(i=1;i<=m;i++){
		scanf("%d %d",&p[i],&c[i]);	
	} 

	for(i=m;i>=1;i--){
		if(p[i]!=1){
		if((n-p[i]-c[i]+1)>=ans){
		}else if(ans>=(n-c[i]+1)){
			ans = ans-p[i]+1;
		}else
			ans = ans+c[i];
		}
	}

	printf("%d\n",ans);

	}
	return 0;
}