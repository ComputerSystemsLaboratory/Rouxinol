#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<ll, ll> P;

#define EACH(i,a) for (auto& i : a)
#define FOR(i,a,b) for (ll i=(a);i<(b);i++)
#define RFOR(i,a,b) for (ll i=(b)-1;i>=(a);i--)
#define REP(i,n) for (ll i=0;i<(n);i++)
#define RREP(i,n) for (ll i=(n)-1;i>=0;i--)
#define debug(x) cout<<#x<<": "<<x<<endl
#define pb push_back
#define ALL(a) (a).begin(),(a).end()

const ll linf = 1e18;
const int inf = 1e9;
const double eps = 1e-12;
const double pi = acos(-1);

template<typename T>
istream& operator>>(istream& is, vector<T>& vec) {
	EACH(x,vec) is >> x;
	return is;
}
/*
template<class... T>
ostream& operator<<(ostream& os, tuple<T...>& t) {
	for (size_t i = 0; i < tuple_size< tuple<T...> >::value; ++i) {
		if (i) os << " ";
		os << get<0>(t);
	}
	return os;
}
*/
template<typename T>
ostream& operator<<(ostream& os, vector<T>& vec) {
	REP(i,vec.size()) {
		if (i) os << " ";
		os << vec[i];
	}
	return os;
}
template<typename T>
ostream& operator<<(ostream& os, vector< vector<T> >& vec) {
	REP(i,vec.size()) {
		if (i) os << endl;
		os << vec[i];
	}
	return os;
}

class Seg {
private:
    int size;
    vector<int> data;
public:
    int get(int l, int r, int n, int L, int R) {
        if (r <= L || R <= l) return 0;
        if (L <= l && r <= R) return data[n];
        int m = (l + r) / 2;
        return get(l, m, n*2+1, L, R) + get(m, r, n*2+2, L, R);
    }
    int get(int l, int r) {
        return get(0, size, 0, l, r);
    }
    void add(int pos, int val) {
        pos += size-1;
        while (1) {
            data[pos] += val;
            if (pos == 0) break;
            pos = (pos-1)/2;
        }
    }
    Seg(int n) {
        for (size = 1; size < n; size <<= 1);
        data = vector<int>(size*2-1, 0);
    }
};

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
    int n, q; cin >> n >> q;
    Seg seg(n);
    REP(i, q) {
        int com, x, y; cin >> com >> x >> y; --x;
        if (com == 0) {
            seg.add(x, y);
        }
        else {
            cout << seg.get(x, y) << endl;
        }
    }
}