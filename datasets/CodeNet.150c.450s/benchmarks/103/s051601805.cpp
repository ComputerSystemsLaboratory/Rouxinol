#include<stdio.h>

int main(){
	while(1){
		int n,s;
		scanf("%d %d",&n,&s);
		if(n==0)return 0;
		int ans=0;
		int i,j;
		int sum;
		int time;
		for(i=0;i<1<<10;i++){
			sum=0;
			time=0;
			for(j=0;j<10;j++)if(i>>j&1){sum+=j;time++;}
			if(sum==s&&time==n)ans++;
		}
		printf("%d\n",ans);
	}
}