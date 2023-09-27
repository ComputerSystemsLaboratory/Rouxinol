#include <bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0); cin.tie(); cout.tie()
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define endl '\n'
#define len(a) a.size()

using namespace std;

typedef long long ll;

int main()
{
    int n, k; cin >> n >> k;
    vector <int> a (n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n - k; i++) {
        if (a[i] >= a[i + k]) {
            cout << "No" << endl;
        }
        else {
            cout << "Yes" << endl;
        }
    }
    return 0;
}
