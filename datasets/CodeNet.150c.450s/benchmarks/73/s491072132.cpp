#include <bits/stdc++.h>
#define REP(i,n) for(int i=0; i<(int)(n); ++i)

using namespace std;

struct SegTree{
    int n;
    vector<int> data;
    SegTree(int N){
        n = 1;
        while(n < N) n *= 2;
        data.assign(2 * n - 1, 0);
    }
    void add(int k, int x){
        k += n - 1;
        data[k] += x;
        while(k > 0){
            k = (k - 1) / 2;
            data[k] = data[2 * k + 1] + data[2 * k + 2];
        }
    }
    int query(int a, int b){
        return query(a, b, 0, 0, n);
    }
    int query(int a, int b, int k, int l, int r){
        if(r <= a || b <= l) {
            return 0;
        } else if(a <= l && r <= b) {
            return data[k];
        } else {
            int vl = query(a, b, 2 * k + 1, l, (l + r) / 2);
            int vr = query(a, b, 2 * k + 2, (l + r) / 2, r);
            return vl + vr;
        }
    }
};

int main(){
    int n, q;
    while(cin >> n >> q){
        SegTree tree(n);
        REP(i, q){
            int com;
            cin >> com;
            if(com == 0){
                int k, x;
                cin >> k >> x;
                k--;
                tree.add(k, x);
            }else{
                int a, b;
                cin >> a >> b;
                a--; b--;
                cout << tree.query(a, b + 1) << endl;
            }
        }
    }
    return 0;
}