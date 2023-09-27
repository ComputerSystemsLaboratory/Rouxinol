#include<bits/stdc++.h>
using ll  = long long;
#define int ll
#define rep(i,n) for(int i=0;i<n;i++)
#define loop(i,s,n) for(int i=s;i<n;i++)
#define erep(e,v) for(auto && e :v)
#define all(in) in.begin(), in.end()
#define MP make_pair
#define INF (sizeof(int) == 4 ? (int)1e9:(int)1e18)
#define EPS 0.0000000001
using namespace std;
template<class T, class S> void cmin(T &a, const S &b) { if (a > b)a = b; }
template<class T, class S> void cmax(T &a, const S &b) { if (a < b)a = b; }
template<typename Head, typename Value> auto vectors(const Head &head, const Value &v) { return vector<Value>(head, v); }
template<typename Head, typename... Tail> auto vectors(Head x, Tail... tail) { auto inner = vectors(tail...); return vector<decltype(inner)>(x, inner); }
template<class T> void join(T a){for(auto itr :a){if(itr != *a.begin())cout << " "; cout << itr;} }
using ld  = long double;
using pii = pair<int,int>;
using piii = pair<int,pii>;
int W,H;
int dx[]={0,0,1,-1}, dy[]={1,-1,0,0};
bool valid(int x,int y){return (0<=x&&x<W)&&(0<=y&&y<H);}
template<class T, class Func = function<T(T, T)>>
class segtree {
    vector<T> obj;
    int offset;
    Func updater;
    T e;
    int bufsize(int num) {
        int i = 1;
        for (; num >i; i <<= 1);
        offset = i - 1;
        return (i << 1) - 1;
    }
    T query(int a, int b, int k, int l, int r) {
        if (r <= a || b <= l)return e;
        if (a <= l && r <= b)return obj[k];
        else return updater(query(a, b, k * 2 + 1, l, (l + r) / 2), query(a, b, k * 2 + 2, (l + r) / 2, r));
    }
public:
    T query(int a, int b) {//[a,b)
        return query(a, b, 0, 0, offset + 1);
    }
    void updateall(int l = 0, int r = -1) {
        if (r < 0)r = offset + 1;
        l += offset, r += offset;
        do {
            l = (l - 1) >> 1, r = (r - 1) >> 1;
            for (int i = l; i < r; i++)obj[i] = updater(obj[i * 2 + 1], obj[i * 2 + 2]);
        } while (l);
    }
    void update(int k, T a) {
        k += offset;
        obj[k] += a;
        while (k) {
            k = (k - 1) >> 1;
            obj[k] = updater(obj[k * 2 + 1], obj[k * 2 + 2]);
        }
    }
    segtree(int n, T e, const Func &updater = Func()) :obj(bufsize(n), e), e(e), updater(updater) {}
    segtree(vector<T> &vec, T e, const Func &updater = Func()) :obj(bufsize(vec.size()), e), e(e), updater(updater) {
        copy(vec.begin(), vec.end(), obj.begin() + offset);
        updateall();
    }
    typename vector<T>::reference operator[](int n) {
        return obj[n + offset];
    }
};
signed main(){
    int n,q; cin >> n >> q;
    segtree<int>sgt(n,0LL,[](auto a,auto b){
        return a + b;
    });
    rep(_,q){
        int a,b,c; cin >> c >> a >> b;
        if(c == 0){
            sgt.update(a-1,b);
            //sgt.updateall();
        } else {
            cout << sgt.query(a-1, b) << endl;
        }
    }
}



