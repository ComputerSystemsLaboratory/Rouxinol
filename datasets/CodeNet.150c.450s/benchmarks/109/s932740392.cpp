#include "bits/stdc++.h"

using namespace std;

long long int N,M,K,L,R,H,W;

const long long int MOD=1000000007;



int main(){
	
	while(cin>>N,N){
		vector<int>v(86401);
		for(int i=0;i<N;i++){
			string s,t;
			cin>>s>>t;
			int a=((s[0]-'0')*10+(s[1]-'0'))*3600+((s[3]-'0')*10+s[4]-'0')*60+((s[6]-'0')*10+s[7]-'0');
			int b=((t[0]-'0')*10+(t[1]-'0'))*3600+((t[3]-'0')*10+t[4]-'0')*60+((t[6]-'0')*10+t[7]-'0');
			v[a]++;
			v[b]--;
		}
		for(int i=1;i<=86400;i++)v[i]+=v[i-1];
		cout<<*max_element(v.begin(),v.end())<<endl;
	}
	return 0;
}
