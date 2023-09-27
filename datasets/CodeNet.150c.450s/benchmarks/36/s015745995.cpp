#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
#include<vector>
#include<map>
#include<set>
#include<queue>
#include<stack>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)
#define INF 1000000000
int d;
int main() {
	while (cin >> d) {
		int ans = 0;
		for (int i = d;i <= 600 - d;i+=d) {
			ans += i * i*d;
		}
		cout << ans << endl;
	}
	getchar();getchar();
	return 0;
}
