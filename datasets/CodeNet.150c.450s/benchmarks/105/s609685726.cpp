#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<cstring>
#include<vector>
#include<queue>
#include<set>
//#define ls (rt<<1)
//#define rs (rt<<1|1)
#define vi vector<int>
#define pb push_back
#define mk make_pair
#define pii pair<int,int>
#define rep(i,a,b) for(int i=(a),i##end=(b);i<=i##end;i++)
#define fi first
#define se second
typedef long long ll;
const int maxn=205;
using namespace std;
ll a[maxn];
struct basis{
	ll a[64];
	void reset(){memset(a,0,sizeof(a));}
	void insert(ll x){
		for(int i=63;i>=0;i--){
			if(x&(1ll<<i)){
				if(!a[i]){
					a[i]=x;break;
				}
				x^=a[i];
			}
		}
	}
	bool exist(ll x){
		for(int i=63;i>=0;i--){
			if(x&(1ll<<i)){
				if(a[i])x^=a[i];
				else {return 0;}
			}
		}
		return 1;
	}
}t;
char s[maxn];
void solve(){
	int n;scanf("%d",&n);rep(i,1,n)scanf("%lld",&a[i]);
	scanf("%s",s+1);t.reset();
	if(s[n]=='1'){printf("1\n");return;}
	t.insert(a[n]);
	for(int i=n-1;i>=1;i--){
		if(s[i]=='0'){
			t.insert(a[i]);
		}
		else{
			if(!t.exist(a[i])){printf("1\n");return;}
		}
	}
	printf("0\n");
}
int main(){
	int t;scanf("%d",&t);
	while(t--)solve();
}
