#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <string>
#include <sstream>
#include <cstring>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cctype>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <bitset>

#define rep(i, n) for(int i = 0; i < (n); i++)
#define FOR(i, a, b) for(int i = (a); i < (b); i++)
#define all(v) (v).begin(), (v).end()
#define rev(s) (s).rbegin(), (s).rend()
#define MP make_pair
#define X first
#define Y second
#define debug(x) cout << #x << " = " << x << endl;
#define sq(x) ((x)*(x))

using namespace std;

typedef long long ll;
typedef pair<int, int> P;
typedef vector<int> vi;

int main(){
	int n, k;
	while(cin >> n >> k, n|k){
		queue<int> q;
		int sum = 0;
		int ans = -1e10;
		rep(i, n){
			int a;
			cin >> a;
			sum += a;
			q.push(a);
			if(q.size() >= k){
				ans = max(ans, sum);
				sum -= q.front();
				q.pop();
			}
		}
		cout << ans << endl;
	}
}