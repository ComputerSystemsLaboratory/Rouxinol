#include<stdio.h>
int n[100001];
int main(){
	int a,b;
	while(1){
		scanf("%d%d",&a,&b);
		if(a==0&&b==0)return 0;
		int temp=0;
		for(int i=1;i<a+1;i++){
			int val;
			scanf("%d",&val);
			n[i]=(temp+=val);
			//printf("%d\n",n[i]);
		}
		int max=-1000000000;
		for(int i=0;i<a-b+1;i++){
			if(max<n[i+b]-n[i])max=n[i+b]-n[i];
			//printf("%d\n",n[i+b]-n[i]);
		}
		printf("%d\n",max);
	}
}