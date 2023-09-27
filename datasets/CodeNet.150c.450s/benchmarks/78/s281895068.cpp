#include<cstdio>
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

#define reps(i,f,n) for(int i=f;i<int(n);i++)
#define rep(i,n) reps(i,0,n)

#define M 1111111
#define F 2222

#define INF 1000000000

int dp1[M];
int dp2[M];

int main(){
	
	vector<int> num;
	
	int sum=0;
	reps(i,1,M){
		sum = sum+(i+1)*i/2;
		if(sum>M)break;
		num.push_back(sum);
	}
	
	vector<int> numodd;
	rep(i,num.size()){
		if(num[i]%2==1)numodd.push_back(num[i]);
	}
	
	rep(i,M)dp1[i]=dp2[i]=INF;
	dp1[0]=dp2[0]=0;
	
	rep(i,M){
		rep(j,num.size()){
			if(i-num[j]>=0)dp1[i] = min(dp1[i] , dp1[i-num[j]]+1);
		}
	}
	rep(i,M){
		rep(j,numodd.size()){
			if(i-numodd[j]>=0)dp2[i] = min(dp2[i] , dp2[i-numodd[j]]+1);
		}
	}
	
	while(1){
		int n;
		cin>>n;
		if(n==0)break;
		printf("%d %d\n",dp1[n],dp2[n]);
	}
	
}