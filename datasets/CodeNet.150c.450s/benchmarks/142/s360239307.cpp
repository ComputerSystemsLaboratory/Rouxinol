#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;

int a[200010];

int main() {
    ios_base::sync_with_stdio(0);
    int n, k; cin >> n >> k;
    for (int i=0;i<n;i++) cin >> a[i];
    for (int i=k;i<n;i++) {
        cout << (a[i]>a[i-k]? "Yes": "No") << endl;
    }
}
