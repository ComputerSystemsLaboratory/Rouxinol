#include<iostream>
#include<cstdio>

using namespace std;

int n,s,cnt;

void solve(int now, int sum, int dep){
	if(sum==s&&dep==n){
		cnt++;
		return;
	}
	else if(sum>s||dep>n) return;
	else{
		for(int i=now+1;i<10;i++){
			solve(i,sum+i,dep+1);
		}
	}
}

int main(){
	while(scanf("%d %d",&n,&s)){
		if(n==0&&s==0)
		break;
		cnt=0;
		for(int i=0;i<10;i++){
			solve(i,i,1);
		}
		printf("%d\n",cnt);
	}
}