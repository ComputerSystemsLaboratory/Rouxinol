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
    double a,b,c;
    int ret = 0;
    while(cin >> a >> b >> c) {
        if(a == 0 && b == 0 && c == 0) break;
        rep(i,1,1000) {
            rep(j,1,1000) {
                int x,y;
                x = (double)i * (100.0+a) / 100.0;
                y = (double)j * (100.0+a) / 100.0;

                if(x+y != c) continue;
                x = (double)i * (100.0+b) / 100.0;
                y = (double)j * (100.0+b) / 100.0;
                ret = max(ret, x+y);
            }
        }
        cout << ret << endl;
        ret = 0;
    }
}