#include <stdio.h>

int n, s, cnt;

void dfs(int i, int sum, int n){
    if(sum==s&&!n){
        cnt++;
        return;
    }
    if(i==10||!n) return;
    dfs(i+1,sum,n);
    dfs(i+1,sum+i,n-1);
}

int main(){
	while(1){
		scanf("%d%d",&n,&s);
		if(n==0&&s==0){
			break;
		}
		cnt=0;
		dfs(0,0,n);
		printf("%d\n",cnt);
	}

    return 0;
}