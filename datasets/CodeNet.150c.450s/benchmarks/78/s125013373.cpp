#include<bits/stdc++.h>
using namespace std;
#define N 1000100
int dp[N], odd[N];
#define reps(i,n,m) for(int i=int(n);i<int(m);i++)
#define rep(i,n) reps(i,0,n)
int func(int x) {
	return x*(x+1)*(x+2)/6;
}
int main() {
	int num = 1;
	int a;
	rep(i,N) {
		dp[i]=N;
		odd[i]=N;
	}
	while((a=func(num)) < N){
		dp[a] = 1;
		if(a%2==1) odd[a]=1;
		reps(i,1,N-a) {
			if(dp[i]!=N) {
				dp[i+a] = min(dp[i+a], dp[i]+1);
			}
			if(a%2==1 && odd[i]!=N) {
				odd[i+a]=min(odd[i+a], odd[i]+1);
			}
		}
		num++;
	}
	int x;
	while(cin>>x&&x!=0) {
		cout<<dp[x]<<" "<<odd[x]<<endl;
	}
	return 0;
}