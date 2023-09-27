#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <map>
#include <queue>
#include <stack>
#include <string>
#include <sstream>
#include <cstring>
#include <cstdlib>

using namespace std;

#define ALL(c) c.begin(),c.end()
#define RALL(c) c.rbegin(),c.rend()
#define REP(i,x,y) for(int i=(x);i<(y);++i)
#define MP(a,b) make_pair((a),(b))
#define F_ first
#define S_ second

typedef long long int lli;
typedef pair<int,int> Pi;

const int INF=100000000;
const long long int INF_=1000000000000000000;

int main(){
	int N;
	while(cin >> N&&N){
		vector<int> A(N+1);
		REP(i,1,N+1) cin >> A[i];
		vector<int> s(N+1);
		REP(i,1,N+1) s[i]=s[i-1]+A[i];
		lli ans=-INF_;
		REP(i,0,N+1) REP(j,i+1,N+1) if(ans<s[j]-s[i]) ans=s[j]-s[i];
		cout << ans << endl;
	}
	return 0;
}