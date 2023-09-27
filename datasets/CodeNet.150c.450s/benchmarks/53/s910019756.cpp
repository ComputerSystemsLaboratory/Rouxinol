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

int main() {
    int n;
    cin >> n;
    cout << n << ":";
    int lim = sqrt(n);
    for (int i = 2; i <= lim; i++) {
        while (n % i == 0) {
            cout << " " << i;
            n /= i;
        }
    }
    if (n != 1) cout << " " << n;
    cout << endl;
    return 0;
}
