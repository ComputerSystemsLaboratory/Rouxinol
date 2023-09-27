#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <vector>
#include <utility>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <map>
#include <set>
#include <stack>
#include <queue>
 
using namespace std;
 
#define pb(n)	push_back(n)
#define mp(n,m) make_pair(n,m)
#define fi 	first
#define se 	second
#define all(r) (r).begin(),(r).end()
 
#define REP(i,s,e)	for(int i=(s); i<(e); i++)
#define rep(i,n)	REP(i,0,n)
#define REPE(i,s,e)	for(int i=s; i>e; i--)
#define repe(i,n)	REPE(i,n,-1)


typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
 
typedef vector<vi> vvi;
 
const int IMAX=((1<<30)-1)*2+1;
const int INF=100000000;
const double EPS=1e-10;
//int mod=1000000007
 

 string mcxi="mcxi";
 int dig[4]={1000,100,10,1};

string toMCXI(int n){
	string ret="";
	rep(i,4){
		if(n%10!=0) ret+=mcxi[mcxi.size()-1-i];
		if(n%10>1) ret+=(char)('0'+(n % 10));
		n/=10;
	}
	reverse(all(ret));
	return ret;
}

int fromMCXI(string s){
	int ret=0;
	rep(i,s.size()){
		int t=1;
		if(s[i]>='2'&&s[i]<='9') t+=s[i]-'1',i++;
		rep(j,4) {
			if(s[i]==mcxi[j]) {
				t*=dig[j];
				break;
			}
		}
		ret+=t;	
	}
	return ret;
}

int main(){
	int n;
	cin>>n;
	string s,t;
	rep(i,n){
		cin>>s>>t;
		cout<<toMCXI(fromMCXI(s)+fromMCXI(t))<<endl;
	}
	
}