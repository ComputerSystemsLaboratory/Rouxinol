#include<iostream>
#include<iomanip>
#include<algorithm>
#include<string>
#include<map>
#include<cmath>
#include<queue>	
#include<functional>
#include<climits>

using namespace std;

namespace MyLib {

//define
#define ALL(a) a.begin(),a.end()
#define REP(i,n) for(int i=0;i<n;i++)
#define RREP(i,n) for(int i=n-1;i>=0;i--)
#define debug(x) if(1)cout<<#x<<":"<<x<<endl;
#define DEBUG(x) if(1)cout<<#x<<":"<<x<<endl;
#define ll long long

//constant
const int MOD = 1000000007;
const int INF = INT_MAX / 3-1;
const double EPS = 1e-9;
const int dx[4] = { 1,0,-1,0 };
const int dy[4] = { 0,1,0,-1 };

//typedef
typedef vector<int> vi;
typedef vector<vector<int>> vvi;

}

using namespace MyLib;



int main() {
	int n, m;
	while (cin >> n >> m, n) {
		vector<pair<int, int>> s(100000);
		fill(s.begin(), s.end(), make_pair(0, 0));
		int buff, buf;
		REP(i, n) {
			cin >> buff >> buf;
			s[i] = make_pair(buff, buf);
		}
		sort(s.begin(), s.end(), [](pair<int, int> lef, pair<int, int> rig) {return lef.second > rig.second; });
		for(int i=0;m>0&&i<n;i++)
			if (m - s[i].first >= 0) {
				m -= s[i].first;
				s[i].first = 0;
			}
			else {
				s[i].first -= m;
				m = 0;
			}
		int res=0;
		REP(i, n)
			res += s[i].first*s[i].second;
		cout << res << endl;
																					



	}

	return 0;
}