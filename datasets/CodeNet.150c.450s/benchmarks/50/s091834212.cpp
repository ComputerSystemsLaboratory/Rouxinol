#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <algorithm>
#include <sstream>
#include <map>
#include <set>

#define REP(i,k,n) for(int i=k;i<n;i++)
#define rep(i,n) for(int i=0;i<n;i++)
#define INF 1<<30
#define pb push_back
#define mp make_pair

using namespace std;
typedef long long ll;
typedef pair<int,int> P;

int main() {
	int n;
	while(cin >> n && n) {
		int m = 1000 - n;

		int a[6] = {500, 100, 50, 10, 5, 1};
		int ans = 0;
		rep(i, 6) {
			if(m >= a[i]) {
				ans += m / a[i];
				m %= a[i];
			}
		}

		cout << ans << endl;
	}


	return 0;
}