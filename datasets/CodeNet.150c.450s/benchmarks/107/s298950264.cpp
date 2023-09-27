#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;

#define Canuc80k cin.tie(0); cout.tie(0);
#define FOR(i,a,b) for (int i=a;i<=b;i++)
#define FORD(i,a,b) for (int i=a;i>=b;i--)
#define I_AM ios_base::sync_with_stdio(0);
#define FORS(i,a,b,c) for (int i=a;i<=b;i+=c)
#define FORSD(i,a,b,c) for (int i=a;i>=b;i-=c)

const ll N = 1e3 + 5;
const ll M = 1e9 + 7;

int f[N][N];
string s1, s2;

int cal(int n, int m) { 
    if (n == 0) return m;
    if (m == 0) return n;
    if (f[n][m] != -1) return f[n][m];

    if (s1[n - 1] == s2[m - 1]) {
        f[n][m] = cal(n - 1, m - 1);
        return f[n][m];
    }

    int temp = INT_MAX;
    temp = min(temp, cal(n - 1, m) + 1);
    temp = min(temp, cal(n, m - 1) + 1);
    temp = min(temp, cal(n - 1, m - 1) + 1);

    f[n][m] = temp;
    return temp;
}

int main() {
    I_AM Canuc80k

    cin >> s1 >> s2;

    FOR (i, 0, s1.size()) 
        FOR (j, 0, s2.size()) 
            f[i][j] = -1;
        
    cal(s1.size(), s2.size());

    cout << max(0, f[s1.size()][s2.size()]) << endl;
}
