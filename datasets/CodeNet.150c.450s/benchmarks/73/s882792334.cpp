#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(ll i=0;i<(ll)n;i++)

const ll INF = (1LL<<31)-1;

template <typename T>
struct RSQ{

    int n = 1;
    vector<T> rsq;

    RSQ(int sz){
        while(n<sz) n*=2;
        rsq.resize(n*2+10);
    }

    void add(int i, T x){
        i += (n-1);
        rsq[i] += x;
        while(i>0){
            i = (i-1)/2;
            rsq[i] = rsq[i*2+1] + rsq[i*2+2];
        }
    }

    T getSum(int a, int b, int i, int l, int r){
        if(r<=a || b<=l) return 0;

        if(a<=l && r<=b) return rsq[i];
        else{
            T vl = getSum(a,b,i*2+1,l,(l+r)/2);
            T vr = getSum(a,b,i*2+2,(l+r)/2,r);
            return vl + vr;
        }
    }
};

int main(){
    int n,q;
    cin >> n >> q;

    int N=1;
    while(N<n) N*=2;

    RSQ<ll> rsq(n);
    rep(i,q){
        int c; cin >> c;

        if(c){
            int s,t; cin >> s >> t;
            s--;t--;
            cout << rsq.getSum(s,t+1,0,0,N) << endl;
        }else{
            int x,y; cin >> x >> y;
            x--;
            rsq.add(x,y);
        }
    }
}
