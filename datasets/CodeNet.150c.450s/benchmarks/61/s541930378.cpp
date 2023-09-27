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
	int N,A,B,C,X;
	while(scanf("%d%d%d%d%d",&N,&A,&B,&C,&X),N){
		int c = 0;
		bool f = false;
		rep(i,N){
			int tmp;
			scanf("%d",&tmp);
			if(f)continue;
			while(tmp != X){
				X = (A*X+B)%C;
				c++;
				if(c > 10000){
					f = true;
					break;
				}
			}
			X = (A*X+B)%C;
			c++;
		}
		if(f)puts("-1");
		else printf("%d\n",c-1);	
	}
	return 0;
}