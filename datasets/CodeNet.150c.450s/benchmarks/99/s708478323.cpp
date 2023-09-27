#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define repl(i,a,b) for(int i=(int)(a);i<(int)(b);i++)
#define rep(i,n) repl(i,0,n)
#define each(itr,v) for(auto itr:v)
#define pb(s) push_back(s)
#define mp(a,b) make_pair(a,b)
#define all(x) (x).begin(),(x).end()
#define dbg(x) cout<<#x"="<<x<<endl
#define maxch(x,y) x=max(x,y)
#define minch(x,y) x=min(x,y)
#define uni(x) x.erase(unique(all(x)),x.end())
#define exist(x,y) (find(all(x),y)!=x.end())
#define bcnt(x) bitset<32>(x).count()

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> P;
typedef pair<P, int> PPI;
typedef pair<ll, ll> PL;
typedef pair<P, ll> PPL;

#define INF INT_MAX/3

#define MAX_N 1000

string encrypt(int n){
	int m=n/1000,c=n%1000/100,x=n%100/10,i=n%10;
	string res;
	if(m>0){
		if(m!=1)res+=to_string(m);
		res+="m";
	}
	if(c>0){
		if(c!=1)res+=to_string(c);
		res+="c";
	}
	if(x>0){
		if(x!=1)res+=to_string(x);
		res+="x";
	}
	if(i>0){
		if(i!=1)res+=to_string(i);
		res+="i";
	}
	return res;
}

int decrypt(string s){
	int l=0,len=0;
	int res=0;
	rep(i,s.length()){
		if(s[i]=='m'){
			if(len==0)res+=1000;
			else res+=1000*stoi(s.substr(l,len));
			l=i+1;
			len=0;
		}else if(s[i]=='c'){
			if(len==0)res+=100;
			else res+=100*stoi(s.substr(l,len));
			l=i+1;
			len=0;
		}else if(s[i]=='x'){
			if(len==0)res+=10;
			else res+=10*stoi(s.substr(l,len));
			l=i+1;
			len=0;
		}else if(s[i]=='i'){
			if(len==0)res+=1;
			else res+=1*stoi(s.substr(l,len));
			l=i+1;
			len=0;
		}else len++;
	}
	return res;
}

int main(){
	cin.sync_with_stdio(false);
	int n;
	cin>>n;
	rep(i,n){
		string s1,s2;
		cin>>s1>>s2;
		cout<<encrypt(decrypt(s1)+decrypt(s2))<<endl;
	}
	return 0;
}