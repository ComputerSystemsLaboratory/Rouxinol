#include <bits/stdc++.h>
#include <math.h>

using namespace std;

long long inf=1000000007;

int main(){
	long long d;
	cin>>d;
	map<long long,long long> c,last;
	for(long long i=1;i<=26;i++){
		long long hoge;
		cin>>hoge;
		c[i]=hoge;
		last[i]=0;
	}

	vector<vector<long long>> vec(d,vector<long long>(27,0));
	for(long long i=0;i<d;i++){
		for(long long j=1;j<=26;j++){
			cin>>vec.at(i).at(j);
		}
	}

	long long ans=0;

	for(long long i=0;i<d;i++){
		long long t;
		cin>>t;
		last.at(t)=i+1;
		ans+=vec.at(i).at(t);

		for(long long j=1;j<=26;j++){
			ans-=c.at(j)*(i+1-last.at(j));
		}

		cout<<ans<<endl;
	}

	return 0;
}
