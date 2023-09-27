#include <bits/stdc++.h>
using namespace std;

template<typename T>
class SegTree{
    const T identity_element = 0; // additive identity
    //const T identity_element = 1LL; // multiplicative identity
    //const T identity_element = numeric_limits<int>::max(); // identity element for min()
    //const T identity_element = -1e9; // identity element for max()
    //static const T mod = 1e9+7;
    static T combine(T L, T R){
        return (L + R);  // modify this code.
        //return (L * R) % mod;
        //return min(L, R);
        //return max(L, R);
    }
    size_t n;
    vector<T> data;
public:
    SegTree(size_t _n): n(_n), data(vector<T>(2 * _n, identity_element)) {}
    SegTree(const vector<T> &src): n(src.size()), data(2 * n, identity_element) {init(src);}
    void init(const vector<T> &src){
        for (size_t i = 0; i != n; ++i) data[n + i] = src[i];
        for (size_t i = n - 1; i != 0; --i) data[i] = combine(data[i<<1], data[i<<1|1]);
    }
    void modify(size_t i, T v){
        for (data[i += n] = v; i >>= 1; ) data[i] = combine(data[i<<1], data[i<<1|1]);
    }
    void add(size_t i, T v){
        modify(i, v + data[i + n]);
    }
    T query(size_t L, size_t R){
        T retL = identity_element;
        T retR = identity_element;
        for (L += n, R += n; L < R; L>>= 1, R >>= 1){
            if (L & 1) retL = combine(retL, data[L++]);
            if (R & 1) retR = combine(data[--R], retR);
        }
        return combine(retL, retR);
    }
};


int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n, q;
    cin >> n >> q;
    SegTree<int> seg(n);
    while (q--){
        int com, x, y;
        cin >> com >> x >> y;
        if (com == 0){
            seg.add(--x, y);
        }else{
            cout << seg.query(--x, y) << '\n';
        }
    }
    return 0;
}