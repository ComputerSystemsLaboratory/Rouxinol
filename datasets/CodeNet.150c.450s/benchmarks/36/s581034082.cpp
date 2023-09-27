#include <bits/stdc++.h>
#define rep(i,a,n) for(int i=a;i<n;i++)
#define repr(i,a,n) for(int i=a;i>=n;i--)
#define INF 999999999
#define INF_M 2147483647
#define pb(a) push_back(a)

using namespace std;
typedef pair<int, int> pii;
typedef long long int ll;
typedef vector<pii> VP;

int dy[]={0, 0, 1, -1};
int dx[]={1, -1, 0, 0};

int main() {
    int n;
    while(cin >> n) {
    	ll ret = 0;
    	int m = 600 / n;
    	rep(i,0,m) {
    		ret += n * (i * i * n * n);
    	}
    	cout << ret << endl;
    }
    return 0;
}