#include <bits/stdc++.h>
#include <math.h>

using namespace std;

long long inf=1000000007;

int main(){
	long long n;
	cin>>n;
	vector<vector<long long>> kankei(n+1);
	vector<long long> dis(n+1,-1);

	for(long long i=0;i<n;i++){
		long long u,k;
		cin>>u>>k;
		for(long long j=0;j<k;j++){
			long long hoge;
			cin>>hoge;
			kankei.at(u).push_back(hoge);
		}
	}

	queue<long long> que;
	que.push(1);
	dis.at(1)=0;

	while(!que.empty()){
		long long now=que.front();
		que.pop();

		for(auto a:kankei.at(now)){
			if(dis.at(a)!=-1) continue;
			que.push(a);
			dis.at(a)=dis.at(now)+1;
		}
	}

	for(long long i=1;i<=n;i++){
		cout<<i<<" "<<dis.at(i)<<endl;
	}

	return 0;
}

