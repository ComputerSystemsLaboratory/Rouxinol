#include<bits/stdc++.h>
#define range(i,a,b) for(int i = (a); i < (b); i++)
#define rep(i,b) for(int i = 0; i < (b); i++)
#define all(a) (a).begin(), (a).end()
#define show(x)  cerr << #x << " = " << (x) << endl;
//const int INF = 1e8;
using namespace std;

const int MAX_N = 100010;

class segTree{
    public:
        int n, dat[4 * MAX_N];
        virtual int query(int, int, int, int, int) = 0;
        virtual int query(int, int) = 0;
        virtual void update(int, int){};
        void init(int n_){}
        void init(int a[MAX_N], int n_){ //??????a??§????????????
            n = 1;
            while(n < n_) n *= 2;
            for(int i = n; i < n * n; i++){
                dat[i] = a[i - n];
            }
            for(int i = n - 1; i >= 1; i--){
                dat[i] = min(dat[i * 2], dat[i * 2 + 1]);
            }
        }
};

class rangeSumQuery : public segTree{
    private:
        int query(int a, int b, int k, int l, int r){
            if(r <= a || b <= l) return 0;

            if(a <= l && r <= b) return dat[k];
            else{
                int vl = query(a, b, k * 2, l, ( l + r) / 2);
                int vr = query(a, b, k * 2 + 1, (l + r) / 2, r);
                return vl + vr;
            }
        }
    public:
        void init(int n_){
            n = 1;
            while(n < n_) n *= 2;
            rep(i,2 * n) dat[i] = 0;
        }
        void update(int i, int x){
            i += n; //????????????
            dat[i] += x;
            while(i > 0){ //?????????????????´??°
                dat[i / 2] = dat[i] + dat[i^1];
                i = i / 2;
            }
        }
        int query(int a, int b){
            return query(a,b,1,0,n);
        }
};

class rangeMinimumQuery : public segTree{
    private:
        int query(int a, int b, int k, int l, int r){
            //[a, b) ??¨[l, r)???????????????????????°???INT_MAX
            if(r <= a || b <= l) return INT_MAX;

            //[a,b)???[l,r)????????¨???????????§????????°?????????????????????
            if(a <= l && r <= b) return dat[k];
            else{
                //????????§???????????°??????????????????????°????
                int vl = query(a, b, k * 2, l, ( l + r) / 2);
                int vr = query(a, b, k * 2 + 1, (l + r) / 2, r);
                return min(vl, vr);
            }
        }
    public:
        void init(int _n){
            n = 1;
            while(n < _n) n *= 2;
            rep(i,2 * n) dat[i] = INT_MAX;
        }
        void update(int i, int x){
            i += n; //????????????
            dat[i] = x;
            while(i > 0){ //?????????????????´??°
                dat[i / 2] = min(dat[i], dat[i^1]);
                i = i / 2;
            }
        }
        //[a, b)???????°????????±???????
        int query(int a, int b){
            return query(a,b,1,0,n);
        }
};

int main(){
    int n, q;
    cin >> n >> q;

    rangeSumQuery seg;
    seg.init(n);
    rep(i,q){
        int com;
        cin >> com;
        if(com){
            int x, y;
            cin >> x >> y;
            cout << seg.query(x - 1, y) << endl;
        }else{
            int x, y;
            cin >> x >> y;
            seg.update(x - 1, y);
        }
    }
}