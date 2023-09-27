#include <bits/stdc++.h>
#define REP(i,n) for (long long i=0;i<(n);i++)



using namespace std;
/*
struct Monoid {
    using T = _underlying_set_;
    static  T op(const T& a, const T& b) { return _a_op_b_; }
    static constexpr T id() { return _identity_element_; }
    static T update(const T& a,const T& b) {return _a_update_b_;}
};
*/

template <class Monoid>
class SegTree {
   private:
    using T = typename Monoid::T;
    const size_t n;
    vector<T> t;
    void prop_to(size_t i) { t[i] = Monoid::op(t[2*i+1],t[2*i+2]); }
    // 更新
   public:
    SegTree(size_t m,T val) : n(m){
        t.resize(2*n-1,Monoid::id());
        for (long long i = 0;i < n;i++) t[i+(n-1)] = val;
        for (long long i = (n-2); i >= 0; --i) prop_to(i);
    }

    SegTree(vector<T> &a)
        : n(a.size()){ 
        t.resize(2*n-1,Monoid::id());
        for (long long i = 0;i < n;i++) t[i+(n-1)] = a[i];
        for (long long i = (n-2); i >= 0; --i) prop_to(i);
    }

    T operator[](size_t i) {return t[i+(n-1)];} // 列のi番目を返す

    void update(size_t i, const T& v) { // 列のi番目に対し、vを作用。
        t[i += (n-1)] = Monoid::update(t[i],v);
        while (i && ((--i) >>= 1)) prop_to(i);
        if(n >= 2) prop_to(0);
    }

    T find(size_t l, size_t r) { // [l,r)の範囲で見つける。
        T accl = Monoid::id(), accr = Monoid::id();
        for (l += (n-1), r += (n-1); l < r; l >>= 1, (--r) >>= 1) {
            if(!(l & 1)) accl = Monoid::op(accl, t[l]);
            if(!(r & 1)) accr = Monoid::op(t[r-1], accr);
        }
        return Monoid::op(accl, accr);
    }
};

//モノイド
struct RMQ { //区間の最小値
    using T = int;
    static T op(const T& a, const T& b) { return min(a, b); }         //モノイド演算
    static constexpr T id() {return numeric_limits<T>::max(); } //モノイド単位元
    static T update(const T& a,const T& b) {return b != id() ? b : a;}    //更新関数
};

struct RSQ { //区間の合計
    using T = int;
    static T op(const T&a,const T& b) {return a+b;}
    static constexpr T id() {return 0;}
    static T update(const T& a,const T& b) {return a+b;}
};

int main(void) {
    int n,q,com,x,y;
    cin >> n >> q;
    vector<int> a(n,0);
    SegTree<RSQ> sg(a);
    REP(i,q) {
        cin >> com >> x >> y;
        if (com) cout << sg.find(x,y+1) << endl;
        else sg.update(x,y);
    }
}

