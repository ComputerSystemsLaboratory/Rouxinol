#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=(a);i<=(b);i++)
#define per(i,a,b) for(int i=(a);i>=(b);i--)
#define REP(i,n) for(int i=0;i<(n);i++)
#define fi first
#define se second
#define pb push_back
#define mp make_pair
using namespace std;
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef long long ll;

template<class T> void read(T &x){
	int f=0; x=0; char ch=getchar();
	for(;!isdigit(ch);ch=getchar()) f|=(ch=='-');
	for(;isdigit(ch);ch=getchar()) x=x*10+ch-'0';
	if(f) x=-x;
}

const int N=205;
ll a[N],b[65];
char s[N];
int n;

void rmain(){
	read(n);
	rep(i,1,n) read(a[i]);
	scanf("%s",s+1);
	memset(b,0,sizeof b);
	per(i,n,1){
		ll x=a[i];
		if(s[i]=='1'){
			per(j,60,0){
				if(x>>j&1){
					x^=b[j];
				}
			}
			if(x){
				puts("1");
				return;
			}
		}
		else{
			per(j,60,0){
				if(x>>j&1){
					if(b[j]){
						x^=b[j];
					}
					else{
						b[j]=x;
						break;
					}
				}
			}
		}
	}
	puts("0");
}

int main(){
	int T; read(T);
	while(T--) rmain();
	return 0;
}
