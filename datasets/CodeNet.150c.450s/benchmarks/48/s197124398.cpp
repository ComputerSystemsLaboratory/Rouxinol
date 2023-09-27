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
	int e;
	while (cin >> e, e) {
		auto ans = tuple<int, int, int>(INF, INF, INF);
		for (int z = 0;z*z*z <= e;z++) 
			for (int y = 0; y*y + z*z*z <= e; y++) {
				int x = e - z*z*z - y*y;
				if (x + y + z < get<0>(ans) + get<1>(ans) + get<2>(ans))
					ans = make_tuple(x, y, z);
				
			}
		cout << get<0>(ans) + get<1>(ans) + get<2>(ans) << endl;

	}

	return 0;
}