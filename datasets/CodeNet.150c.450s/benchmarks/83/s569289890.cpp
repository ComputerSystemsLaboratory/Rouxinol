#include <bits/stdc++.h>
using namespace std;

//nap no some
struct nap{
	vector<long long> v,w;
	long long N,W;
	vector< vector<long long> > dp;
	nap(long long n,long long wmax){
		N=n;W=wmax;
		v.resize(n);
		w.resize(n);
		vector<long long> wv(W+1,0);
		for(int i=0;i<n+1;++i){
			dp.push_back(wv);
		}
	}
	void calc(){
		for(int i=0;i<N;i++){
			for(int j=0;j<W+1;j++){
				if(j<w[i]){
					dp[i+1][j]=dp[i][j];
				}else{
					dp[i+1][j]=max(dp[i][j],dp[i][j-w[i]]+v[i]);
				}
			}
		}
	}
	long long maxval(long long w){
		return dp[N][w];
	}
  
  
};
  
  
int main(){
	long long n,w;
	cin>>n>>w;
	nap na(n,w);
	for(int i=0;i<n;++i){
		cin>>na.v[i]>>na.w[i];
	}
	na.calc();
	cout<<na.maxval(w)<<endl;
	return 0;
}
