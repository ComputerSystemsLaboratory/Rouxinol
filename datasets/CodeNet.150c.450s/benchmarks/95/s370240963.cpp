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
	int n;
	while(scanf("%d",&n),n){
		int c = 0;
		bool prev = false;
		bool R = false;
		bool L = false;
		rep(i,n){
			char str[5];
			scanf("%s",str);
			if(strcmp(str,"lu") == 0){
				L = true;
			}
			if(strcmp(str,"ru") == 0){
				R = true;
			}
			if(strcmp(str,"ld") == 0){
				L = false;
			}
			if(strcmp(str,"rd") == 0){
				R = false;
			}
			//cout << L << " " << R << " " << prev << "\n";
			if(L != prev && R != prev){
				c++;
				prev = !prev;
			}
		}
		printf("%d\n",c);
	}
	return 0;
}