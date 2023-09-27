#include<iostream>
#include<algorithm>
using namespace std;

	int N,W;
		int v[100],w[100];
		int dp[1000][10004];
int dfs(int i,int omosa){
	//int a1=0,a2=0;
	//cout<<i<<" "<<omosa<<endl;
	if(dp[i][omosa]>=0)return dp[i][omosa];
	if(i==N){
	dp[i][omosa]=0;
	 return 0;//すべての商品を試したとき.
	}
	
	if(omosa<w[i])return dp[i][omosa]=dfs(i+1,omosa);
	

	int a1=dfs(i+1,omosa);
	int a2=dfs(i+1,omosa-w[i])+v[i];
	//cout<<a1<<"#"<<a2<<endl;
	dp[i][omosa]=max(a1,a2);
	return max(a1,a2);

}

int main(){
	cin>>N>>W;
	for(int i=0;i<N;i++)cin>>v[i]>>w[i];
//	for(int i=0;i<N;i++)cout<<v[i]<<" "<<w[i]<<endl;
	for(int i=0;i<1000;i++){
		for(int j=0;j<10004;j++){
			dp[i][j]=-1;
		}
	}
	cout<<dfs(0,W)<<endl;
	
	return 0;
	}