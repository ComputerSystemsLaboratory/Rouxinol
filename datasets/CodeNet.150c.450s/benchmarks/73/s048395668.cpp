#include <bits/stdc++.h>
#define rep(i, a, n) for(int i = a; i < n; i++)
#define repp(i, n) rep(i, 0, n)
#define repb(i, a, b) for(int i = a; i >= b; i--)
#define all(a) a.begin(), a.end()
#define int long long
using namespace std;
typedef pair<int, int> P;


struct RSQ{
    int n;
    vector<int> dat;
    void init(int n_){
        n = 1;
        while(n < n_) n *= 2;
        dat.resize(2 * n - 1, 0);
        // rep(i, 0, 2 * n - 1) dat[i] = MAX;
    }
    void add(int k, int a){
        k += n - 1;
        dat[k] += a;
        while(k > 0){
            k = (k - 1) / 2;
            dat[k] = dat[2 * k + 1] + dat[2 * k + 2];
        }
    }
    //min[a, b) query(a, b, 0, 0, rq.n)
    int getsum(int a, int b, int k, int l, int r){
        if(r <= a || b <= l) return 0;
        if(a <= l && r <= b) return dat[k];
        int vl = getsum(a, b, k * 2 + 1, l, (l + r) / 2);
        int vr = getsum(a, b, k * 2 + 2, (l + r) / 2, r);
        return vl + vr;
    }
};

signed main(){
    int n, q;
    cin >> n >> q;
    RSQ r;
    r.init(n);
    rep(i, 0, q){
        int c, x, y;
        cin >> c >> x >> y;
        if(c == 0){
            r.add(x - 1, y);
        }else{
            cout << r.getsum(x - 1, y, 0, 0, r.n) << endl;
        }
    }
    // rep(i, 0, 15){
    //     cout << i << ' ' << r.dat[i] << endl;
    // }
}