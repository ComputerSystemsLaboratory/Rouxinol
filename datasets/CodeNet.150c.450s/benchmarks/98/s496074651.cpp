#include<iostream>
#include<vector>
#include<string>
#include<algorithm>	
#include<map>
#include<set>
#include<utility>
#include<cmath>
#include<cstring>
#include<queue>
#include<stack>
#include<cstdio>
#include<sstream>
#include<iomanip>
#include<assert.h>
#define loop(i,a,b) for(int i=a;i<b;i++) 
#define rep(i,a) loop(i,0,a)
#define pb push_back
#define mt make_tuple
#define all(in) in.begin(),in.end()
#define shosu(x) fixed<<setprecision(x)
using namespace std;
//kaewasuretyuui
typedef long long ll;
typedef pair<ll,ll> pii;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<pii> vp;
typedef vector<vp> vvp;
typedef vector<string> vs;
typedef vector<double> vd;
typedef tuple<ll,ll,ll,ll> tp;
typedef vector<tp> vt;
typedef vector<vd> vvd;
typedef pair<int,pii> pip;
typedef vector<pip>vip;
const double PI=acos(-1);
const double EPS=1e-7;
const int inf=1e9;
const ll INF=2e18;
int dx[]={0,1,0,-1};
int dy[]={1,0,-1,0};
int main(){
	int n,m;
	while(cin>>n>>m,n|m){
		vi a(n),b(m);
		rep(i,n)cin>>a[i];
		rep(i,m)cin>>b[i];
		int sum_a=0,sum_b=0;
		rep(i,n)sum_a+=a[i];
		rep(i,m)sum_b+=b[i];
		int out_a=inf,out_b=inf;
		rep(i,n)rep(j,m)if(sum_a-a[i]+b[j]==sum_b-b[j]+a[i]){
			if(out_a+out_b>a[i]+b[j]){
				out_a=a[i];
				out_b=b[j];
			}
		}
		if(out_a!=inf)cout<<out_a<<" "<<out_b<<endl;
		else cout<<-1<<endl;
		end:;
	}
}