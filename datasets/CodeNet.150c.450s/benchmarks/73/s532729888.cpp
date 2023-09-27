#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;
typedef long long ll;
// Segment Tree
// コンストラクタには要素数を渡す
/* 根               : 1
 * 左からx番目の葉  : x+N
 * iの親のindex     : i/2
 * iの子のindex     : i*2+0, i*2+1
 * iの兄弟(sibling) : i^1
 * iの深さ(depth)   : log_2 iの整数部分
 * iの区間幅(width) : N/highest(i)
 * iの区間の左端    : (i-highest(i))*width(i)
 */

inline int highest(long long x){
    int res = -1;
    for(int i=0;i<64;i++){
        if(1LL<<i < x) res=i;
        else break;
    }
    return res;
}

typedef ll data_t;
struct SegTree {
    vector<data_t> dat; int n;
    SegTree(int n_){
        int k = 1;
        while(k < n_) k<<=1;
        this->n = k;
        dat.assign(k*2, 0);
    }

    // ボトムアップ
    void update(int k, int x){
        int i = n + k; // leaf
        dat[i] = x;
        while(i != 1){ // 1 is root
            dat[i>>1] = dat[i] + dat[i^1];
            i>>=1;
        }
    }

    // 区間[a,b)の最小値を求める
    // kはセグメントの番号でl,rはそれが覆う開区間の両端
    // トップダウン
    data_t query(int a, int b, int k=1, int l=0, int r=-1){
        if(r == -1) r = n;
        if(r <= a || b <= l) return 0;
        if(a <= l && r <= b) return dat[k];
        data_t v1 = query(a, b, k<<1,   l,       (l+r)/2 );
        data_t v2 = query(a, b, k<<1|1, (l+r)/2, r       );
        return v1+v2;
    }
};

int main(){
    int n,q;
    cin>>n>>q;
    SegTree t(n);
    for(int i=0;i<q;i++){
        ll c,x,y;
        cin>>c>>x>>y;
        if(c==0){ // update
            x--;
            ll a = t.query(x,x+1);
            t.update(x, a+y);
        } else { // query
            x--;y--;
            cout << t.query(x, y+1) << endl;
        }
        // for(int i=0;i<t.n;i++){
        //     printf("%lld,", t.dat[i]);
        // }
        // puts ("");
    }
}