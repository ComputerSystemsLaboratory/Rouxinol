#include<cstdio>
#include<iostream>
#include<algorithm>
#include<functional>
#include<cmath>
#include<vector>
#include<stack>
#include<queue>

using namespace std;

typedef pair<int,int> P;
typedef long long ll;
typedef pair<int,P> PP;

int n,m;


int main()
{

	while(cin>>n>>m){
		if(n==0&&m==0)return 0;
		int h[2000];
		int w[2000];
		vector<int> a;
		vector<int> b;
		vector<P> c;
		vector<P> d;

		int sum=0;
		int hi,wi;
		for(int i=1;i<=n;i++){
			cin>>hi;
			sum+=hi;
			h[i]=sum;
		}
		sum=0;
		for(int i=1;i<=m;i++){
			cin>>wi;
			sum+=wi;
			w[i]=sum;
		}


		for(int i=0;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				a.push_back(h[j]-h[i]);
			}
		}

		for(int i=0;i<=m;i++){
			for(int j=i+1;j<=m;j++){
				b.push_back(w[j]-w[i]);
			}
		}


		sort(a.begin(),a.end());
		sort(b.begin(),b.end());

/*
		for(int i=0;i<a.size();i++){
			cout<<"a[i]"<<a[i]<<endl;
		}
		for(int i=0;i<b.size();i++){
			cout<<"b[i]"<<b[i]<<endl;
		}

*/
		c.push_back(P(a[0],1));
		d.push_back(P(b[0],1));

		for(int i=1;i<a.size();i++){
			if(a[i]==c[c.size()-1].first)c[c.size()-1].second++;
			else c.push_back(P(a[i],1));
		}

		/*
		cout<<endl;
		for(int i=0;i<c.size();i++){
			cout<<c[i].first<<"  "<<c[i].second<<endl;
		}
		cout<<endl;
		*/

		for(int i=1;i<b.size();i++){
			if(b[i]==d[d.size()-1].first)d[d.size()-1].second++;
			else d.push_back(P(b[i],1));
		}
		/*
		for(int i=0;i<d.size();i++){
			cout<<d[i].first<<"  "<<d[i].second<<endl;
		}
		*/

		int i=0,j=0;
		ll ans=0;
		while(i<c.size()&&j<d.size()){
			if(c[i].first==d[j].first){
				ans+=c[i].second*d[j].second;
				i++;j++;
			}
			else if(c[i].first<d[j].first)i++;
			else j++;
		}
		cout<<ans<<endl;
	}



	return 0;
}