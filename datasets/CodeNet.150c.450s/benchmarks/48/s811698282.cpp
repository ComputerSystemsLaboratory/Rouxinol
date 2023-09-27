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
		int e;
		cin >> e;
		if(e==0)break;

		int ans=1<<28;

		rep(z,101){
			rep(y,1001){
				int x = e - ((z*z*z)+(y*y));
				if(x<0) continue;
				ans=min(ans,x+y+z);
			}
		}
	
		cout << ans << endl;
	}

	return 0;
}