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
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef long long ll;
int main(){
	int x,y,s;
	while(scanf("%d%d%d",&x,&y,&s),(x|y|s)){
		int ma = -INF;
		reps(i,1,s){
			int a = i;
			int b = s-i;
			double m = a * 100.0 / (100.0+x);
			double n = b * 100.0 / (100.0+x);
			if((int)(ceil(m)*(100.0+x)/100) != a)continue;
			if((int)(ceil(n)*(100.0+x)/100) != b)continue;
			int p = (int)(double)(ceil(m)*(100.0+y)/100.0);
			int q = (int)(double)(ceil(n)*(100.0+y)/100.0);	
			ma = max(ma,p+q);
		}
		printf("%d\n",ma);
	}
	return 0;
}