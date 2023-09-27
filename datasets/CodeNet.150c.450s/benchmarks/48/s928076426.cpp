#include <bits/stdc++.h>
using namespace std;
const int dx[]={1,0,0,-1,1,-1,-1,1,2,0,-2,0};
const int dy[]={0,1,-1,0,1,1,-1,-1,0,2,0,-2};
const int INF = 1<<30;
const double EPS = 1e-8;
#define PB push_back
#define mk make_pair
#define fr first
#define sc second
#define reps(i,j,k) for(int i = (j); i < (k); ++i)
#define rep(i,j) reps(i,0,j)
#define MOD 1000000007
#define lengthof(x) (sizeof(x) / sizeof(*(x)))
typedef pair<int,int> Pii;
typedef pair<int,Pii > P;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef long long ll;
int main(){
	int e;
	while(scanf("%d",&e),e){
		int ans = INF;
		rep(y,1001){
			rep(z,101){
				int Y = y*y;
				int Z = z*z*z;
				if(Y+Z > e)continue;
				ans = min(ans,e-Y-Z+y+z);
			}
		}
		printf("%d\n",ans);
	}
	return 0;
}