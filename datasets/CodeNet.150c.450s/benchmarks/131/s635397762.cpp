#include<iostream>
#include<sstream>
#include<algorithm>
#include<set>
#include<map>
#include<queue>
#include<complex>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cassert>

#define rep(i,n) for(int i=0;i<(int)n;i++)
#define all(c) (c).begin(),(c).end()
#define mp make_pair
#define pb push_back
#define each(i,c) for(__typeof((c).begin()) i=(c).begin();i!=(c).end();i++)
#define dbg(x) cerr<<__LINE__<<": "<<#x<<" = "<<(x)<<endl

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
const int inf = (int)1e9;
const double INF = 1e12, EPS = 1e-9;

int main(){
	int n, m;
	while(cin >> n >> m, m){
		char buf[20], buf2[20];
		map<int, int> memo;
		memo[n] = 0;
		
		int cnt = 0;
		
		while(1){
			sprintf(buf, "%0*d", m, n);
			sort(buf, buf + m);
			strcpy(buf2, buf);
			reverse(buf2, buf2 + m);
			
			int a, b;
			sscanf(buf, "%d", &a);
			sscanf(buf2, "%d", &b);
			
			n = b - a;
			cnt++;
			if(memo.count(n)){
				cout << memo[n] << " " << n << " " << cnt - memo[n] << endl;
				break;
			}
			memo[n] = cnt;
		}
	}
	return 0;
}