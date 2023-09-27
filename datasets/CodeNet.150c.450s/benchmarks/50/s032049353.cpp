#include<stdio.h>
int n;
int ans;
int i;
int c[6]={500,100,50,10,5,1};

int main(){
	while(1){
		scanf("%d",&n);
		if(n==0)return 0;
		ans=0;
		n=1000-n;
		for(i=0;i<6;i++){
			ans+=(int)n/c[i];
			n%=c[i];
		}
		printf("%d\n",ans);
	}
}