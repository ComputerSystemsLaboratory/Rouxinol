#include<cstdio>
#include<string>
#include<cstdlib>
#include<cmath>
#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<cstring>
#include<map>
#include<set>
#include<queue>
#include<stack>
#include<complex>

using namespace std;

typedef pair<int,int> pii;
typedef long long ll;
typedef vector<int> vi;

#define rep(i,j) for(int i=0;i<(j);i++)
#define reps(i,j,k) for(int i=j;i<=k;i++)
#define in(i,j,k) ((i)>=(j)&&(i)<=(k))
#define INF (1<<28)
#define pb(i) push_back(i)
#define fs first
#define sc second

const char dx[]={0,1,0,-1},dy[]={1,0,-1,0};
int d[512][512];
int main(){
	int n,m;
	while(cin >> n && n){
		m = 0;
		fill_n(d[0],512*512,INF);
		rep(i,n){
			int a,b,c;
			cin >> a >> b >> c;
			d[a][b] = d[b][a] = c;
			m = max(m,max(a+1,b+1));
		}
		rep(i,m)d[i][i] = 0;
		rep(k,m)rep(i,m)rep(j,m){
			d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
		}
		int city = -1, val = INF;
		rep(i,m){
			int tmp = 0;
			rep(j,m){
				tmp += d[i][j];
			}
			if(tmp < val){
				val = tmp;
				city = i;
			}
		}
		cout << city << " " << val << endl;
	}
	return 0;
}