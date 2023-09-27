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
	set<string> u;
	string s;
	bool o = 0;
	
	cin >> n;
	while(n--){
		cin >> s;
		u.insert(s);
	}
	cin >> m;
	while(m--){
		cin >> s;
		if(!u.count(s)) cout << "Unknown " << s << endl;
		else{
			o ^= 1;
			cout << (o ? "Opened" : "Closed") << " by " << s << endl;
		}
	}
	return 0;
}