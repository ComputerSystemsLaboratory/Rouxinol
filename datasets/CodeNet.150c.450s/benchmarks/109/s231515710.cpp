#include<iostream>
#include<iomanip>
#include<algorithm>
#include<vector>
#include<string>
#include<map>
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

//define
#define ALL(a) a.begin(),a.end()
#define REP(i,n) for(int i=0;i<n;i++)
#define RREP(i,n) for(int i=n-1;i>=0;i--)
#define debug(x) if(1)cout<<#x<<":"<<x<<endl;
#define DEBUG(x) if(1)cout<<#x<<":"<<x<<endl;
#define ll long long
#define pb push_back
#define PB push_back
#define lb lower_bound
#define LB lower_bound
#define ub upper_bound
#define UB upper_bound


//constant
const int MOD = 1000000007;
const int INF = INT_MAX / 3 - 1;
const double EPS = 1e-9;
const int dx4[4] = { 1,0,-1,0 };
const int dy4[4] = { 0,1,0,-1 };

//typedef
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef pair<int, int> pii;


int main() {
	int n;
	while (cin >> n, n) {
		vector<pii> times(2*n);
		string buf;
		REP(i,n)
			REP(j, 2) {
			cin >> buf;
			times[2 * i + j].first = stoi(buf.substr(0, 2)) * 60 * 60 + stoi(buf.substr(3, 2)) * 60 + stoi(buf.substr(6, 2));
			times[2 * i + j].second = j;
		}
		sort(ALL(times),
			[](pii lef, pii rig) {
			return lef.first < rig.first ||
				lef.first == rig.first && lef.second>rig.second;
		});
		int count = 0;
		int stopping = 0;
		REP(i, 2 * n) {
			if (times[i].second)
				stopping++;
			else if (stopping > 0)
				stopping--;
			else
				count++;
		}
		cout << count << endl;
	}
	return 0;
}