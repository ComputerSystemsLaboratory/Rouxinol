#include <bits/stdc++.h>
#define rep(i,a,n) for(int i=a;i<n;i++)
#define repr(i,a,n) for(int i=a;i>=n;i--)
#define INF 999999999
#define pb(a) push_back(a)

using namespace std;
typedef pair<int, int> pii;
typedef long long int ll;
typedef vector<pii> VP;

int dy[]={0, 0, 1, -1};
int dx[]={1, -1, 0, 0};

int main() {
    int n;
    const int N = 1000000;
    int dp1[1000000];
    int dp2[1000000];

    rep(i,0,N) dp1[i] = dp2[i] = i;

    int val = 1;
    for(int i = 1; val <= N; i++) {
        for(int j=0; j+val <= N; j++) {
            dp1[j+val] = min(dp1[j+val], dp1[j] + 1);
            if(val%2 == 1) dp2[j+val] = min(dp2[j+val], dp2[j] + 1);
        }
        val = i * (i+1) * (i+2) / 6;
    }

    while(cin >> n) {
        if(n == 0) break;
        cout << dp1[n] << " " << dp2[n] << endl;
    }

    return 0;
}