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
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<pii> vp;
typedef vector<vp> vvp;
typedef vector<string> vs;
typedef vector<double> vd;
//typedef tuple<ll,ll,ll,ll> tp;
//typedef vector<tp> vt;
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
	string out[]={
		{".,!? "},
		{"abc"},
		{"def"},
		{"ghi"},
		{"jkl"},
		{"mno"},
		{"pqrs"},
		{"tuv"},
		{"wxyz"}
	};
	int n;
	cin>>n;
	while(n--){
		string s;
		cin>>s;
		int now=-1,co=0;
		s+="0";
		rep(i,s.size()){
			if(s[i]=='0'){
				co--;
				if(now+1)cout<<out[now][co%out[now].size()];
				now=-1;
				co=0;
			}else{
				now=s[i]-'1';
				co++;
			}
		}
		cout<<endl;
	}
}