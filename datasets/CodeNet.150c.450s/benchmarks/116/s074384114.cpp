#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
//#include<cctype>
#include<climits>
#include<iostream>
#include<string>
#include<vector>
#include<map>
//#include<list>
#include<queue>
#include<deque>
#include<algorithm>
//#include<numeric>
#include<utility>
//#include<memory>
#include<functional>
#include<cassert>
#include<set>
#include<stack>
#include<random>

const int dx[] = {1, 0, -1, 0};
const int dy[] = {0, 1, 0, -1};
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pii;

const int MAXN = 100100;
int a[MAXN], sum[MAXN];

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int N, K;
    while (cin >> N >> K) {
    	if (N==0 && K==0) break;
    	for (int i = 0; i < N; i++)
    		cin >> a[i];
    	for (int i = 0; i < N; i++) 
    		sum[i+1] = sum[i]+a[i];
    	int ans = -1e9-1;
    	for (int i = 0; i+K <= N; i++) {
    		ans = max(ans, sum[i+K]-sum[i]);
    	}
    	cout << ans << endl;
    }
    return 0;
}