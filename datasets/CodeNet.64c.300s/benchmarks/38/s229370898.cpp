#include <stdio.h>
#include <stdbool.h>
int balls[10];
int left[10],right[10],l=0,r=0,det;
void solve();
void dfs(int depth);
bool check();
int main(void){
	int times;
	scanf("%d",&times);
	for(int i=0;i<times;i++){
		for(int j=0;j<10;j++)
			scanf("%d",&balls[j]);
		solve();
	}
	return 0; 
}

void solve(){
	det=0;
	dfs(0);
	if(det)	puts("YES");
	else	puts("NO");
}

void dfs(int depth){
	if(det)	return;
	if(depth==10){
		if(check())	det=1;
		return;
	}
	left[l++]=balls[depth++];
	dfs(depth);
	l--;depth--;
	right[r++]=balls[depth++];
	dfs(depth);
	r--;depth--;
}

bool check(){
	bool m=1,n=1;
	for(int i=0;i<l-1;i++)
		if(left[i]>left[i+1]){
			m=0;
			break;
		}
	for(int i=0;i<r-1;i++)
		if(right[i]>right[i+1]){
			n=0;
			break;
		}
	return m&&n;
}