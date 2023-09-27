#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>
  
int main()
{
	int n,m;
	int p[50];
	int i,j;
	int ans;

	while(1){
	scanf("%d %d",&n,&m);
	if((n==0)&&(m==0))
		break;
	//ここまでテンプレ

	for(i=0;i<n;i++)
		p[i]=0;
	j=m;
	ans=-1;
	while(1){
		for(i=0;i<n;i++){
			if(j>0){
				p[i]++;
				j--;
				if(p[i]==m){
					ans=i;
					break;
				}
			}else if(j==0){
				j+=p[i];
				p[i]=0;
			}

		}
		if(ans>-1)
			break;
	}

	printf("%d\n",ans);


	//ここからテンプレ
	}
	return 0;
}