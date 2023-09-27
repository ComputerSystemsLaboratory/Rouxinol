#include <algorithm>
#include <climits>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <functional>
#include <iostream>
#include <map>
#include <ostream>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
#define INF 1000000000
#define rep(i,a,b) for (int i=(a);i<(b);i++)
#define rev(i,a,b) for (int i=(a)-1;i>=b;i--)
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef queue<int> qi;
typedef vector<int> vi;
typedef vector<string> vs;
int dx[4] = { 0, 1, 0, -1 };
int dy[4] = { 1, 0, -1, 0 };

#define NUM 1000000

bool prime[NUM];

void hurui() {
	rep(i,0,NUM) prime[i] = true;
	prime[0] = false;
	int num = sqrt(NUM);
 	rep(i,1,num) {
		if (prime[i])
			for (int j=i+1; (i+1)*j<=NUM; j++)
				prime[(i+1)*j-1] = false;
	}
}

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);

	int a, d, n;

	hurui();

	// rep(i,0,60) {
	// 	cout << prime[i] << " ";
	// 	if(i % 20 == 0) cout << endl;
	// }

	while(true) {
		cin >> a >> d >> n;
		if(a == 0 && d == 0 && n == 0) break;

		ll tmp = a;
		int cnt = 0;
		while(tmp < NUM && cnt < n) {
			if(prime[tmp-1]) {
				cnt++;
				// cout << cnt << " : " << tmp << endl;
			}
			tmp += d;
		}

		cout << tmp-d << endl;
	}


	return 0;
}