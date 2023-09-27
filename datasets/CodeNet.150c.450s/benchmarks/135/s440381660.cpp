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
#include<cstdio>
#include<sstream>
#include<iomanip>
#define loop(i,a,b) for(int i=a;i<b;i++) 
#define rep(i,a) loop(i,0,a)
#define pb push_back
#define mp make_pair
#define all(in) in.begin(),in.end()
#define shosu(x) fixed<<setprecision(x)
using namespace std;
//kaewasuretyuui
typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<pii> vp;
typedef vector<vp> vvp;
typedef pair<int,pii> pip;
typedef vector<pip>vip;
const double PI=acos(-1);
const double EPS=1e-8;
const int inf=1e8;
int main(){
	int n,m;
	while(cin>>n>>m,n+m){
		vi a(n+1),b(m+1);
		rep(i,n)cin>>a[i+1];
		rep(i,m)cin>>b[i+1];
		rep(i,n)a[i+1]+=a[i];
		rep(i,m)b[i+1]+=b[i];
		vi sa,sb;
		rep(i,n+1)loop(j,i+1,n+1)sa.pb(a[j]-a[i]);
		rep(i,m+1)loop(j,i+1,m+1)sb.pb(b[j]-b[i]);
		sort(all(sa));
		sort(all(sb));
		int out=0;
		rep(i,sa.size()){
			out+=upper_bound(all(sb),sa[i])-lower_bound(all(sb),sa[i]);
		}
		cout<<out<<endl;
	}
}