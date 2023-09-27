#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<map>
#include<set>
#include<cstring>
#include<queue>
#include<stack>
#include<cstdio>
#include<iomanip>
#define pb push_back
#define all(in) in.begin(),in.end()
#define shosu(x) fixed<<setprecision(x)
#define loop(i,a,b) for(ll i=a;i<b;i++)
#define rep(i,a) loop(i,0,a)
using namespace std;
typedef long long ll;
typedef ll Def;
typedef pair<Def,Def> pii;
typedef vector<Def> vi;
typedef vector<vi> vii;
typedef vector<pii> vp;
typedef vector<string> vs;
Def inf = sizeof(Def) == sizeof(ll) ? 2e18 : 1e9+10;
signed main(){
	string s;
	int n;
	while(cin>>s>>n,n){
		while(s.size()!=n)s="0"+s;
		map<string,int>ma;
		ma[s]=1;
		int co=2;
		while(1){
			string t=s;
			sort(all(t));
			int sa=atoi(&t[0]);
			reverse(all(t));
			sa=atoi(&t[0])-sa;
			t=to_string(sa);
			while(t.size()!=n)t="0"+t;
			if(ma[t]){
				cout<<ma[t]-1<<" "<<atoi(&t[0])<<" "<<co-ma[t]<<endl;
				break;
			}
			ma[t]=co;
			co++;
			s=t;
		}
	}
}






