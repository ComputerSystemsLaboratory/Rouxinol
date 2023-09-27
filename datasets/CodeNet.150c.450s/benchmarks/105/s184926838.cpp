#include <cstdio>
#include <cstring>
#define debug(...) fprintf(stderr,__VA_ARGS__)
using namespace std; 
typedef long long ll;
const int maxN=200+5;
int T;
int N;
ll A[maxN];
ll base[64];
char S[maxN];
void ins(ll x) {
	for(int i=62;~i;--i) if(x>>i&1) {
		if(base[i]) x^=base[i];
		else {
			for(int j=i+1;j<63;++j) if(base[j]>>i&1) {
				base[j]^=x;
			}
			for(int j=i-1;~j;--j) if(x>>j&1) {
				x^=base[j];
			}
			base[i]=x;
			break;
		}
	}
}
bool sol() {
	memset(base,0,sizeof(base));
	for(int i=N;i>=1;--i) {
		if(S[i]=='0') {
			ins(A[i]);
		}
		else {
			for(int j=62;~j;--j) if(A[i]>>j&1) {
				if(!base[j]) return 1;
				A[i]^=base[j];
			}
		}
	}
	return 0;
}
int main() {
	scanf("%d",&T);
	for(int kase=1;kase<=T;++kase) {
		scanf("%d",&N);
		for(int i=1;i<=N;++i) scanf("%lld",&A[i]);
		scanf("%s",S+1);
		printf("%d\n",sol());
	}
	return 0;
}