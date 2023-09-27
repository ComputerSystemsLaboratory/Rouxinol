#include <cstdio>

int main(void){
	for(;;){
		int r,c;
		scanf("%d%d",&r,&c);
		if(r==0)break;
		int dat[10][10000];
		for(int i=0;i<r;i++){
			for(int j=0;j<c;j++){
				scanf("%d",&(dat[i][j]));
			}
		}
		
		int ans=0;
		
		for(int i=0;i<(1<<r);i++){
			int q=0;
			for(int j=0;j<c;j++){
				int p=0;
				for(int k=0;k<r;k++){
					if((dat[k][j]==0)==((i&(1<<k))==0)){
						p++;
					}
				}
				q+=(p>r-p)?p:r-p;
			}
			ans=(ans<q)?q:ans;
		}
		printf("%d\n",ans);
	}
	return 0;
}
		