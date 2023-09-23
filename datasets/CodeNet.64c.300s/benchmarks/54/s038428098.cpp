#include<iostream>
#include<cmath>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rep(i,a) loop(i,0,a)
using namespace std;

int dt[100];
long long dp[100][21];

long long func(int i,int j){
	long long res;
	if(j<0 || j>20)return 0;
	if(dp[i][j]>=0)return dp[i][j];
	if(i==0){
		if(dt[0]==j)res=1;
		else res=0;
	}else res=func(i-1,j-dt[i])+func(i-1,j+dt[i]);
	return dp[i][j]=res;
}

int main(){
	int n;
	cin>>n;
	rep(i,n){
		cin>>dt[i];
	}
	rep(i,100){
		rep(j,21){
			dp[i][j]=-1;
		}
	}
	cout<<func(n-2,dt[n-1])<<endl;
	return 0;
}