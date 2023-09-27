#include<bits/stdc++.h>
#define For(i,x,y) for (register int i=(x);i<=(y);i++)
#define FOR(i,x,y) for (register int i=(x);i<(y);i++)
#define Dow(i,x,y) for (register int i=(x);i>=(y);i--)
#define Debug(v) for (auto i:v) printf("%lld ",i);puts("")
#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define ep emplace_back
#define siz(x) ((int)(x).size())
#define all(x) (x).begin(),(x).end()
#define fil(a,b) memset((a),(b),sizeof(a))
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pa;
typedef pair<ll,ll> PA;
typedef vector<int> poly;
inline ll read(){
    ll x=0,f=1;char c=getchar();
    while ((c<'0'||c>'9')&&(c!='-')) c=getchar();
    if (c=='-') f=-1,c=getchar();
    while (c>='0'&&c<='9') x=x*10+c-'0',c=getchar();
    return x*f;
}

const int N = 210;
int n;
ll a[N];
char s[N];

ll b[N];
inline void init(){
	For(i,0,63) b[i]=0;
}
inline bool insert(ll x){
	Dow(i,63,0) if (x&(1ll<<i)){
		if (!b[i]) return b[i]=x,1;
			else x^=b[i];
	}
	return 0;
}

inline void solve(){
	n=read();
	For(i,1,n) a[i]=read();
	scanf("%s",s+1);
	init();
	Dow(i,n,1) if (s[i]=='0'){
		insert(a[i]);
	} else if (insert(a[i])) return puts("1"),void(0);
	puts("0");
}

int main(){
	int T=read();
	while (T--) solve();
}