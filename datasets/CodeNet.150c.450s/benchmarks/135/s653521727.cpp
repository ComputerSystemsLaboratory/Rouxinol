#include <bits/stdc++.h>
using namespace std;
const int dx[]={1,0,0,-1,1,-1,-1,1};
const int dy[]={0,1,-1,0,1,1,-1,-1};
const int INF = 1e8;
const double EPS = 1e-8;
#define PB push_back
#define mk make_pair
#define fr first
#define sc second
#define reps(i,j,k) for(int i = (j); i < (k); ++i)
#define rep(i,j) reps(i,0,j)
#define MOD 1000000007
#define lengthof(x) (sizeof(x) / sizeof(*(x)))
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> Pii;
typedef pair<int,vi > P;
typedef unsigned long long ll;
int H[1510010];
int W[1000010];
int main(){
	int N,M;
	while(scanf("%d %d",&N ,&M),N){
		memset(H,0,sizeof(H));
		memset(W,0,sizeof(W));
		int c[1510]={0};
		int d[1510]={0};
		rep(i,N){
			scanf("%d" ,&c[i+1]);
			c[i+1] += c[i];
		}
		rep(i,M){
			scanf("%d" ,&d[i+1]);
			d[i+1] += d[i];
		}
		int ma = -INF;
		rep(i,N+1){
			reps(j,i+1,N+1){
				H[c[j]-c[i]]++;
				ma = max(ma,c[j]-c[i]);
			}
		}
		rep(i,M+1){
			reps(j,i+1,M+1){
				W[d[j]-d[i]]++;
				ma = max(ma,d[j]-d[i]);}

		}
		int ans = 0;
		reps(i,1,ma+1){
			if(H[i] && W[i]){
				ans += H[i]*W[i];
			}
		}
		printf("%d\n",ans);
	}
    return 0;
}