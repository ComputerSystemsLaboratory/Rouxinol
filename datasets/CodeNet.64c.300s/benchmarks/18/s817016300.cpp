#include<iostream>
#include<cstdio>
#include<algorithm>
#include<climits>
#include<string>
#include<vector>
#include<list>
#include<map>
#include<set>
#include<cmath>
#include<queue>
#include<cstring>
#include<stack>
#include<functional>
using namespace std;

int main(){
	int N;
	while(cin>>N,N){
		int dp[31] = {}; dp[0] = 1;
		for(int i=0;i<N;i++){
			for(int j=1;j<=3;j++) if(i+j<=N) dp[i+j] += dp[i];
		}
		printf("%d\n",((dp[N]-1)/10)/365+1);
	}
	return 0;
}