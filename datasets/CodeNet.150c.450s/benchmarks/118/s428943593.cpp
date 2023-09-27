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

int calc(int y, int m, int d){ //1/1/1 = 1からの日数
	int res = 0;
	int a = (y - 1) / 3, b = y - 1 - a;
	res += a * 200 + b * 195;
	res += (m - 1) * 20 - (y % 3 != 0 ? (m - 1) / 2 : 0);
	res += d;
	return res;
}

int main(){
	
	int goal = calc(1000, 1, 1);
	int n;
	cin >> n;
	while(n--){
		int y, m, d;
		cin >> y >> m >> d;
		cout << goal - calc(y, m, d) << endl;
	}
	return 0;
}