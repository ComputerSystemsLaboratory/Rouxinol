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

int w,h;

int dfs(int i, int j, int c[][51]) {
    if(c[i][j] == 1) {
        c[i][j] = 0;
        rep(di,i-1,i+2) {
            rep(dj,j-1,j+2) {
                if(di != i || dj != j) {
                    if(di<0 || di>=h || dj<0 || dj>=w) continue;
                    if(c[di][dj] == 1) dfs(di,dj,c);
                }
            }
        }
        return 1;
    }
    return 0;
}

int main() {
    int c[51][51];

    while(cin >> w >> h) {
        if(w == 0 && h == 0) break;

        rep(i,0,h) {
            rep(j,0,w) {
                cin >> c[i][j];
            }
        }

        int ret = 0;
        rep(i,0,h) {
            rep(j,0,w) {
                ret += dfs(i,j,c);
            }
        }

        cout << ret << endl;
    }
    return 0;
}