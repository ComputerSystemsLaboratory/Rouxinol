#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> iP;

const ll MOD = ll(1e9 + 7);
const ll LLINF = LLONG_MAX;
const int IINF = 99999999;
const int MAX_N = int(1e5) + 5;
const double EPS = 1e-8;
int dx[] = {1, 0, -1, 0}, dy[] = {0, 1, 0, -1};
#define REP(i, n) for (int i = 0; i < n; i++)
#define REPR(i, n) for (int i = n; i >= 0; i--)
#define FOR(i, m, n) for (int i = m; i < n; i++)

int main() {
    int a[1005][11][21];
    for(int s=1,y=1;y<=1001;y++){
        for(int m = 1;m <= 10;m++){
            for(int d = 1;d <= 20;d++){
                a[y][m][d] = s;
                s++;
                if(d==19 && y%3>0 && m%2 == 0)break;
            }
        }
    }
    int n;
    cin >> n;
    REP(t,n){
        int Y,M,D;
        cin >> Y >> M >> D;
        cout << a[1000][1][1] - a[Y][M][D] << endl;
    }
    return 0;
}

