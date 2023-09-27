#include "bits/stdc++.h"
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define PI acos(-1)
#define Mod (int)1000000007
#define INFTY (int)INT_MAX
#define Rep(i, n) for (int i = 0; i < (int)(n); i++)
#define BitRep(i, n) for (int i = 0; i < (int)(1 << n); i++)
#define All(vec) vec.begin(), vec.end()
#define Sum(vec) accumulate(vec.begin(), vec.end(), 0)
#define Sort(vec) sort(vec.begin(), vec.end())
#define Reverse(vec) reverse(vec.begin(), vec.end())
#define Count(vec, x) count(vec.begin(), vec.end(), x)
#define Next_permutation(vec) next_permutation(vec.begin(), vec.end())
#define Find(S, s) S.find(s) != string::npos

ll power(ll m, ll n) {
    if (n == 0) return 1;
    else if (n % 2 == 0) {
        return power(m * m % Mod, n / 2);
    }
    else {
        return power(m * m % Mod, n / 2) * m % Mod;
    }
}

int main() {
    ll m, n;
    cin >> m >> n;
    cout << power(m, n) << endl;
    return 0;
}
