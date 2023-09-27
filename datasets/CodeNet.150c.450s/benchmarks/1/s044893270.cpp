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

const ll N = 1e6 + 1;
const ll M = 1e9 + 7;

int n;
ll a[N], st[N * 4];
ii lb[N];

// l u v r
// u l r v
int getMax(int index, int l, int r, int u, int v) {
    if (u > r || v < l) return -INT_MAX;
    if (u <= l && v >= r) return st[index];

    int mid = (r + l) / 2;
    return max(getMax(index * 2, l, mid, u, v), getMax(index * 2 + 1, mid + 1, r, u, v));
}

void update(int index, int l, int r, int pos, int val) {
    if (l > pos || r < pos) return;
    if (l == r) {
        st[index] = val;
        return;
    }

    int mid = (r + l) / 2;
    update(index * 2, l, mid, pos, val);
    update(index * 2 + 1, mid + 1, r, pos, val);

    st[index] = max(st[index * 2], st[index * 2 + 1]);
}

int main() {
    I_AM Canuc80k

    cin >> n;
    FOR (i, 1, n) {
        cin >> a[i];
        lb[i].first = a[i];
        lb[i].second = i;
    }

    sort(lb + 1, lb + n + 1);
    
    int count = 0;
    FOR (i, 1, n) {
        if (lb[i].first == lb[i - 1].first) 
            a[lb[i].second] = count;
        else a[lb[i].second] = ++ count;
    }

    int res = 1;
    update(1, 0, 1e6, a[1], 1);
    FOR (i, 2, n) {
        int temp = 0;
        if (a[i] != 0) temp = getMax(1, 0, 1e6, 0, a[i] - 1);
        // cout << i << " " << temp << endl;
        res = max(res, temp + 1);
        update(1, 0, 1e6, a[i], temp + 1);
    }

    cout << res << endl;
}
