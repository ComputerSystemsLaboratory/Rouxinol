#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define uniq(v) (v).erase(unique((v).begin(), (v).end()), (v).end())

typedef long long ll;
typedef pair<int, int> P;
typedef unsigned int uint;
typedef unsigned long long ull;
struct pairhash {
public:
    template<typename T, typename U>
    size_t operator()(const pair<T, U> &x) const {
	size_t seed = hash<T>()(x.first);
	return hash<U>()(x.second) + 0x9e3779b9 + (seed<<6) + (seed>>2);
    }
};

const int inf = 1000000009;
const double eps = 1e-8;
// Range Sum Query
template<typename T>
class SegmentTree {
private:
    int n;
    T dat[(1<<18)-1];
public:
    SegmentTree(int& n_) {
	n = 1;
	while (n < n_) n *= 2;
	n_ = n;
	for (int i = 0; i < 2*n-1; i++) dat[i] = 0;
    }

    // add a to node k
    void add(int k, T a) {
	k += n - 1;
	dat[k] += a;
	while (k > 0) {
	    k = (k - 1) / 2;
	    dat[k] = dat[k*2+1] + dat[k*2+2];
	}
    }
    
    // call query(a, b, 0, 0, n)
    T query(int a, int b, int k, int l, int r) {
	if (r <= a || b <= l) return 0;

	if (a <= l && r <= b) return dat[k];
	else {
	    T vl = query(a, b, k*2+1, l, (l+r)/2);
	    T vr = query(a, b, k*2+2, (l+r)/2, r);
	    return vl + vr;
	}
    }
};

void solve(int n, int q) {
    SegmentTree<ll> st(n);
    for (int i = 0; i < q; i++) {
	int com, x, y;
	scanf("%d%d%d", &com, &x, &y);
	x--;
	if (com == 0) {
	    st.add(x, y);
	} else {
	    y--;
	    printf("%lld\n", st.query(x, y+1, 0, 0, n));
	}
    }
}

int main() {
    /*
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout << fixed << setprecision(15);
    */

    int n, q;
    scanf("%d%d", &n ,&q);
    solve(n, q);
}