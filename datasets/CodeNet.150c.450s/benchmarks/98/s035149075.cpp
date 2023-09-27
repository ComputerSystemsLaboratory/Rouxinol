#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>


int main()
{
	int i,j,k;
	int n,m;
	int sa,sb; //a,bの合計
	int a[100],b[100];
	int ans[3];

	while(1){

		scanf("%d %d",&n,&m);
		if((n==0)&&(m==0))
			break;

		//初期化
		sa=0;
		sb=0;
		ans[0]=0;ans[1]=0;ans[2]=201;
		for(i=0;i<100;i++){a[i]=0;b[i]=0;}

		//入力
		for(i=0;i<n;i++){scanf("%d",&a[i]);sa+=a[i];}
		for(i=0;i<m;i++){scanf("%d",&b[i]);sb+=b[i];}

		for(i=0;i<n;i++){
			for(j=0;j<m;j++){
				if((sa-sb)==2*(a[i]-b[j])){
					if(ans[2]>(a[i]+b[j])){
					ans[0]=a[i];
					ans[1]=b[j];
					ans[2]=(a[i]+b[j]);
					}
				}
			}
		}
		
		if(ans[2]==201){
			printf("-1\n");
		}
		else{
			printf("%d %d\n",ans[0],ans[1]);
		}
	}

	return 0;
}