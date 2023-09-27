#include <bits/stdc++.h>
#include <math.h>

using namespace std;

long long inf=1000000007;

long long modpow(long long n,long long p,long long mod);

int main(){
	long long n,m,r;
	cin>>n>>m>>r;
	vector<vector<pair<long long,long long>>> kankei(n);
	vector<bool> done(n,false);
	vector<long long> dis(n,inf*100);

	for(long long i=0;i<m;i++){
		long long a,b,c;
		cin>>a>>b>>c;
		kankei.at(a).push_back(make_pair(b,c));
	}

	priority_queue<pair<long long,long long>,vector<pair<long long,long long>>,greater<pair<long long,long long>>> que;
	que.push(make_pair(0,r));
	while(!que.empty()){
		long long nowpos=que.top().second;
		long long nowdis=que.top().first;
		que.pop();
		if(done.at(nowpos)) continue;
		done.at(nowpos)=true;
		dis.at(nowpos)=nowdis;

		for(auto next:kankei.at(nowpos)){
			que.push(make_pair(nowdis+next.second,next.first));
		}
	}

	for(long long i=0;i<n;i++){
		if(done.at(i)){
			cout<<dis.at(i)<<endl;
		}else{
			cout<<"INF"<<endl;
		}
	}

	return 0;
}

long long modpow(long long n,long long p,long long mod){
	if(p==0) return 1;
	if(p%2==0) return (modpow(n,p/2,mod)*modpow(n,p/2,mod))%mod;
	if(p%2==1) return (modpow(n,p-1,mod)*n)%mod;
	cerr<<"ERROR"<<endl;
	return 1;
}

