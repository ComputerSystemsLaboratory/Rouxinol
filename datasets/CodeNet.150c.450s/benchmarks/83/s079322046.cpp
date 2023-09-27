#include <iostream>
#include <iomanip>
#include <vector>
#include <cmath>
#include <algorithm>
#define shosu(x) fixed<<setprecision(x)
using namespace std;

int n,w,inf=-1,wei[105],val[105],dp[10005];

int func(){
	for(int i=0;i<n;i++){
		for(int j=w;j>=wei[i];j--){
			dp[j]=max(dp[j],dp[j-wei[i]]+val[i]);
		}
	}
	return dp[w];
}

int main(){
	cin>>n>>w;
	for(int i=0;i<n;i++){
		cin>>val[i]>>wei[i];
	}
	cout<<func()<<endl;
}