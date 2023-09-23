#include <iostream>
#include <string>
#include <utility>
#include <algorithm>
#include <queue>
#include <map>

using namespace std;
typedef long long Int;
#define REP(i , x) for(int i = 0 ; i < x ; ++i)


int main()
{
	int n;
	cin >> n;
	REP(i, n){
		int a[3];
		cin >> a[0] >> a[1] >> a[2];
		sort(a, a + 3);
		string ans = a[2] * a[2] == a[1] * a[1] + a[0] * a[0] ? "YES" : "NO";

		cout << ans << endl;
	}
	return 0;
}