#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
#include<cmath>
#include<climits>
#include<ctime>
#include<cstring>
#include<numeric>

#define ALL(v) (v).begin(),(v).end()
#define REP(i,p,n) for(int i=p;i<(int)(n);++i)
#define rep(i,n) REP(i,0,n)
#define dump(a) (cerr << #a << "=" << (a) << endl)
#define DUMP(list) cout << "{ "; for(auto nth : list){ cout << nth << " "; } cout << "}" << endl;

using namespace std;

int main() {
	
	int N,M,P;

	while(cin >> N >> M >> P)
	{
		vector<int> athlete(N,0);
		if(N==0 && M==0 && P==0){ break; }
		rep(i,N){ cin >> athlete[i];}

		int total = accumulate(ALL(athlete),0)*100;
		int gold = total - ((total*P)/100);
	
		int ans;
		if(athlete[M-1] == 0){
			ans = 0;
		}else{
			ans = gold / athlete[M-1];
		}
		cout << ans << endl;

	}
	return 0;
}