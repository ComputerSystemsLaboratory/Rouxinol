#include<bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
#define pb push_back
int dy[]={0, 0, 1, -1, 0};
int dx[]={1, -1, 0, 0, 0};

#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define RFOR(i,a,b) for (int i=(b)-1;i>=(a);i--)
#define REP(i,n) for (int i=0;i<(n);i++)
#define RREP(i,n) for (int i=(n)-1;i>=0;i--)
ll a,b,n;
bool s[50][50];
ll dp[20][20];

ll solve(int i,int j) {
    if(dp[i][j] >= 0)
        return dp[i][j];
    if(i == a - 1 && j == b - 1) {
        return dp[i][j] = 1;
    }

    ll ret = 0;
    if(i + 1 < a && !s[i + 1][j]) {
        ret += solve(i + 1,j);
    }
    if(j + 1 < b && !s[i][j + 1]) {
        ret += solve(i,j + 1);
    }
	return dp[i][j] = ret;
}

int main(){
    while(1) {
        cin >> a >> b;
        if(a == 0)
            break;
        cin >> n;
        REP(i,a) {
            REP(j,b) {
                s[i][j] = false;
            }
        }
        REP(i,n) {
            ll inx,iny;
            cin >> inx >> iny;
            s[inx - 1][iny - 1] = true;
        }

        REP(i,a) {
            REP(j,b) {
                dp[i][j] = -1;
            }
        }

        cout << solve(0,0) << endl;
    }
}


