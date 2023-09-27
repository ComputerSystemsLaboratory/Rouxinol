#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<stdio.h>
#include<time.h>
#include<math.h>
#include<algorithm>
#include<string>
#include<vector>
#include<list>
#include<queue>
#include<stack>
#include<deque>
#include<set>
#include<map>
#define REP(i, N) for(ll i = 0; i < N; ++i)
#define FOR(i, a, b) for(ll i = a; i < b; ++i)
#define ALL(a) (a).begin(),(a).end()
#define pb push_back
#define INF 1000000000
#define MOD 1000000007
using namespace std;
typedef long long ll;
typedef pair<ll, ll> P;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int qx[8] = {1, 1, 0, -1, -1, -1, 0, 1};
int qy[8] = {0, 1, 1, 1, 0, -1, -1, -1};

int main(void) {
	int n;
	cin>>n;
	for(int i = 1; i <= n; ++i) { // CHECK_NUM
		int x = i;
		if(x % 3 == 0) {
			cout<<" "<<i;
		} else {
			while(true) {	// INCLUDE3
				if(x % 10 == 3) {
					cout<<" "<<i;
					break;
				}
				x /= 10;
				if(x == 0) break;
			}
		}
		// END_CHECK_NUM
	}
	cout<<endl;
}