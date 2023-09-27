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

char c[9][5]={{'.',',','!','?',' '},
			{'a','b','c'},
			{'d','e','f'},
			{'g','h','i'},
			{'j','k','l'},
			{'m','n','o'},
			{'p','q','r','s'},
			{'t','u','v'},
			{'w','x','y','z'},
};

string s;

int main(){
	cin.sync_with_stdio(false);
	int cases;
	cin>>cases;
	while(cases--){
		cin>>s;
		string res;
		int i=0;
		while(1){
			while(i<s.length()&&s[i]=='0')i++;
			if(i==s.length())break;
			int cnt=0;
			while(i<s.length()&&s[i]!='0')cnt++,i++;
			int k=s[i-1]-'1';
			int r;
			if(k==0)r=5;
			else if(k==6||k==8)r=4;
			else r=3;
			res+=c[k][(cnt-1)%r];
		}
		cout<<res<<endl;
	}
	return 0;
}