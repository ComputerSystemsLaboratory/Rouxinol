#include <bits/stdc++.h>
#include <tuple>

#define REP(i, n) for(int i=0;i<(int)(n);i++)
#define ALL(x) (x).begin(),(x).end()
#define square(x) (x) * (x)
#define cube(x) (x) * (x) * (x)

const int INF = 1e9;

using namespace std;
int a[2000000];
int b[2000000];
int c[2000001];

int main() {
    int n;
    int maxim = 0;
    cin >> n;
    REP(i, n) {cin >> a[i]; maxim = max(maxim, a[i]); }
    REP(i, maxim+1) c[i] = 0;
    REP(i, n) c[a[i]]++;
    REP(i, maxim) c[i+1] += c[i];
    for(int i=n-1; i>-1; i--){
        b[c[a[i]] - 1] = a[i];
        c[a[i]]--;
    }

    REP(i, n-1) cout << b[i] << " ";
    cout << b[n-1] << endl;


    return 0;
}