#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<string>
#include<complex>

using namespace std;

#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define RFOR(i,a,b) for (int i=(b)-1;i>=(a);i--)
#define REP(i,n) for (int i=0;i<(n);i++)
#define RREP(i,n) for (int i=(n)-1;i>=0;i--)

int grid[20][20000];
int solve() {
    int R, C;
    scanf("%d%d", &R, &C);
    if (R==0 && C==0) return -1;
    REP(i, R) REP(j, C) scanf("%d", &grid[i][j]);
    int powR = pow(2, R);
    int ans = 0;
    REP(i, powR) {
        int sum = 0;
        REP(k, C) {
            int a=0, b=0;
            REP(j, R) (i>>j&1)^(grid[j][k]) ? a++ : b++;
            sum += max(a, b);
        }
        ans = max(ans, sum);
    }
    return ans;
}
int main() {
    int ans;
    while((ans = solve())>=0){
        printf("%d\n", ans);
    }
    return 0;
}