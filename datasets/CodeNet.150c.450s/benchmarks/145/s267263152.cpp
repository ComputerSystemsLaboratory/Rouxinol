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
	string s;
	map<string,int>m;
	int out=0;
	while(cin>>s){
		m[s]++;
		int d=s.size();
		out=max(out,d);
	}
	int ma=0;
	string ans="";
	for(map<string,int>::iterator it=m.begin();it!=m.end();it++){
		ma=max(ma,it->second);
		if(out==it->first.size())ans=it->first;
	}
	for(map<string,int>::iterator it=m.begin();it!=m.end();it++){
		if(it->second==ma)cout<<(it->first)<<" ";
	}
	cout<<ans<<endl;
}