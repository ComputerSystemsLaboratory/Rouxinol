#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
#include<cmath>
#include<climits>
#include<ctime>
#include<cstring>
#include<stack>
#include<queue>
#include<sstream>
#include<string>
#include<bitset>

#define ALL(v) (v).begin(),(v).end()
#define REP(i,p,n) for(int i=p;i<(int)(n);++i)
#define rep(i,n) REP(i,0,n)
#define DUMP(list) cout << "{ "; for(auto nth : list){ cout << nth << " "; } cout << "}" << endl
#define FOR(i,c) for(__typeof((c).begin())i=(c).begin();i!=(c).end();++i);

using namespace std;

int main(){

	while(1){
		int r, c;
		cin >> r >> c;
		if(r==0&&c==0) break;
		int senbei[10001];
		fill_n((int *)senbei,sizeof(senbei)/sizeof(int),0);
		rep(y,r){	
			rep(x,c){	
				int e;
				cin >> e;
				if(e) senbei[x] |= (1 << y);
			}
		}

		int ans = 0;

		rep(bit,1<<r){	
			int a = 0;
			rep(x,c){	
				int n=0, m = senbei[x] ^ bit;
				while(m != 0){
					n++;
					m &= m-1;
				}
				a += max(n,r-n);
			}
			ans = max(ans,a);
		}
		cout << ans << endl;
	}

	return 0;
}