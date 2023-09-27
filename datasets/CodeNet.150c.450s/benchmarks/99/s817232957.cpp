#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>
#include <set>
#include <cstdio>
#include <cmath>
#define rep(i,l,n) for(lint i=l;i<n;i++)
#define rer(i,l,n) for(lint i=l;i<=n;i++)
#define all(a) a.begin(),a.end()
#define o(a) cout<<a<<endl
#define pb(a) push_back(a)
#define mk(a,b) make_pair(a,b)
#define fi first
#define se second
using namespace std;
typedef long long lint;
typedef vector<int> vi;
typedef vector<lint> vli;
typedef vector<vi> vvi;
typedef pair<int,int> pii;

string r="mcxi";
int x[4]={1000,100,10,1};

int sti(string s){
	int res=0;
	int now=1;
	rep(i,0,s.size()){
		rep(j,0,4){
			if(s[i]==r[j]){
				res+=now*x[j];
				now=1;
			}
		}
		if(s[i]-'0'>=0 && s[i]-'0'<=9){
			now=s[i]-'0';
		}
	}
	return res;
}

string its(int k){
	string res="";
	rep(i,0,4){
		if(k/x[i]){
			//o(k/x[i]);
			if(k/x[i]>1) res+=(char)('0'+(int)(k/x[i]));
			res+=r[i];
			k%=x[i];
		}
	}
	return res;
}


int main(){
	int n;
	cin>>n;
	rep(i,0,n){
		string s,t;
		cin>>s>>t;
		int a,b,c;
		a=sti(s);
		b=sti(t);
		c=a+b;

		o(its(c));
	}
}