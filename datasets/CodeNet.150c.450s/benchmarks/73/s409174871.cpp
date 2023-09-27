/*
  セグメント木
  コンストラクタには要素数を渡す
  * 根 : 1
  * 左からx番目の葉 : x+N
  * iの親のindex : i/2
  * iの子のindex : i*2+0, i*2+1
  * iの兄弟(sibling) : i^1
  * iの深さ(depth) : log_2 iの整数部分
  * iの区間幅(width) : N/highest(i)
  * iの区間の左端 : (i-highest(i))*width(i)
  */

#include <vector>
#include <iostream>

using namespace std;
typedef long long ll;

typedef ll dat_t;
dat_t const init = 0;
struct segment_tree {
    vector<dat_t> dat;
    int n;
    segment_tree(int n_){
        n = 1;
        while(n < n_) n<<=1;
        dat.resize(n*2);
        for(int i=n; i<n+n; i++){
            dat[i] = init; // initをdat[i]にするとvectorからのコンストラクタになる
        }
        for(int i=n-1; i>=1; i--){
            dat[i] = dat[i<<1] + dat[i<<1|1];
        }
    }
    // bottom-up
    void add(int k, dat_t x){
        int i = n+k; // leaf
        dat[i] += x;
        while(i != 1){ // 1 is root
            dat[i>>1] = dat[i] + dat[i^1];
            i>>=1;
        }
    }
    // top-down
    dat_t get(int a, int b, int k, int l, int r){
        if(r <= a || b <= l) return 0;
        if(a <= l && r <= b) return dat[k];
        dat_t v1 = get(a,b,k<<1,l,(l+r)/2);
        dat_t v2 = get(a,b,k<<1|1,(l+r)/2,r);
        return v1 + v2;
    }
    dat_t get(int a, int b){
        return get(a,b,1,0,n);
    }
};

int main(){
    int n,q;
    cin >> n >> q;
    segment_tree t(n);
    while(q--){
        ll a,b,c;
        cin >> a >> b >> c;
        if(a==0){
            b--;
            t.add(b,c);
        } else {
            b--; c--;
            cout << t.get(b,c+1) << endl;
        }
    }
}