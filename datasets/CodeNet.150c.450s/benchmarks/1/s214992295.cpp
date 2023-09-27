#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;

#define repeat(i,n) for (int i = 0; i < (n); ++i)

#define MAX_N 100000
#define MIN_A 0
ll n;
ll a[MAX_N];
ll len = 0;
ll seq[MAX_N] = {};

int main() {
    cin >> n;
    repeat (i,n) { cin >> a[i]; ++ a[i]; }
    repeat (i,n) {
        ll *p = lower_bound(seq,seq+len,a[i]);
        if (p == seq+len) ++ len;
        *p = a[i];
    }
    cout << len << endl;
    return 0;
}