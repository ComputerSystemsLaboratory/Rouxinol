#include <stdio.h>
int ans;
void f(int n,int l,int s){
	if(n==0){
		if(s==0)ans++;
		return;
	}
	for(int i=l;i<=9;i++)f(n-1,i+1,s-i);
	return;
}
int main(){
	int n,s;
	while(1){
		scanf("%d%d",&n,&s);
		if(n==0&&s==0)return 0;
		ans=0;
		f(n,0,s);
		printf("%d\n",ans);
	}
}