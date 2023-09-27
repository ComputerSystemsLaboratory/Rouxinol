#include <bits/stdc++.h>
#define pb push_back
#define fst first
#define snd second
#define fore(i,a,b) for(int i=a,ggdem=b;i<ggdem;++i)
#define SZ(x) ((int)x.size())
#define ALL(x) x.begin(),x.end()
#define mset(a,v) memset((a),(v),sizeof(a))
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
using namespace std;
typedef long long ll;

void reduce(vector<vector<ll> >& x){ // returns determinant
	int n=x.size(),m=x[0].size();
	int i=0,j=0;//double r=1.;
	while(i<n&&j<m){
		int l=i;
		fore(k,i+1,n)if(abs(x[k][j])>abs(x[l][j]))l=k;
		if(abs(x[l][j])==0){j++;/*r=0.;*/continue;}
		if(l!=i){swap(x[i],x[l]);}
		//r*=x[i][j];
		//for(int k=m-1;k>=j;k--)x[i][k]/=x[i][j];
		fore(k,0,n){
			if(k==i)continue;
			for(int l=m-1;l>=j;l--)x[k][l]=(x[k][l]+x[k][j]*x[i][l])&1;
		}
		i++;j++;
	}
	//return r;
}

ll solve(vector<ll> &a, vector<ll> &b){
	vector<vector<ll>>m;
	for(auto i: a){
		vector<ll> v;
		fore(j,0,60){
			if((1ll<<j)&i)v.pb(1);
			else v.pb(0);
		}
		m.pb(v);
	}
	ll d=0;
	if(SZ(m)){
		reduce(m);
		for(auto i: m){
			ll tot=0;
			for(auto j:i)tot+=j;
			d+=(tot!=0);
		}	
	}
	for(auto i: b){
		vector<ll> v;
		fore(j,0,60){
			if((1ll<<j)&i)v.pb(1);
			else v.pb(0);
		}
		m.pb(v);
	}
	reduce(m);
	for(auto i: m){
		ll tot=0;
		for(auto j:i)tot+=j;
		d-=(tot!=0);
	}
	return d>=0;
}

int main(){FIN;
	ll t; cin>>t;
	while(t--){
		ll n; cin>>n;
		ll a[n];
		fore(i,0,n)cin>>a[i];
		string s; cin>>s;
		vector<ll> v[2];
		ll br=0;
		reverse(ALL(s));
		reverse(a,a+n);
		fore(i,0,n){
			v[s[i]-'0'].pb(a[i]);
			if(i==n-1||(s[i]=='1'&&s[i+1]=='0')){
				if(!solve(v[0],v[1])){
					cout<<1<<"\n"; br++; break;
				}
			}
		}
		if(br)continue;
		cout<<0<<"\n";
	}
	
	return 0;
}