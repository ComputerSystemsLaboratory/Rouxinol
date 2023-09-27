#include "bits/stdc++.h"

using namespace std;

long long int N,M,K,L,R,H,W;

const long long int MOD=1000000007;



int main(){
	
	vector<int>v(1000001,1);
	v[0]=0;
	v[1]=0;
	for(int i=2;i<=1000000;i++){
		for(int j=i*2;j<=1000000;j+=i){
			v[j]=0;
		}
	}
	while(cin>>N>>M>>K,N){
		N-=M;
		while(K){
			N+=M;
			K-=v[N];
		}
		cout<<N<<endl;
	}
	return 0;
}
