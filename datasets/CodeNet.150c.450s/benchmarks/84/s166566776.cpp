#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
#include <deque>
#include <numeric>
#include <utility>
#define sign(a) ((a>0)-(a<0))
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define LL long long
#define INF (LL)(1LL<<60)
#define all(a) a.begin(), a.end()
#define gr greater<LL>()

using namespace std;

template <class T>
class SegTree{
public:
    vector<T> arr;
    function<T(T,T)> f;
    T ini;
    uint n;
    SegTree(int N, function<T(T,T)> func, T ini_){
        f=func;
        ini=ini_;
        n=1;
        while(n<N)n<<=1u;
        arr.assign(2*n-1, ini);
    }

    void update(uint i, T val){
        i+=n-1;
        arr[i]=val;
        while(i>0){
            i=(i-1)/2;
            arr[i]=f(arr[2*i+1],arr[2*i+2]);
        }
    }

    T find(uint s, uint t){
        return __find(s,t,0,0,n);
    }
private:
    T __find(uint s, uint t, uint k, uint l, uint r){
        if(t<=l || s>=r)return ini;
        if(s<=l && t>=r)return arr[k];
        T vl=__find(s,t,2*k+1,l,(l+r)/2);
        T vr=__find(s,t,2*k+2, (l+r)/2, r);
        return f(vl,vr);
    }
};

int main(){
    LL N;
    cin >> N;
    vector<LL> A(N);
    rep(i,N)cin >> A[i];

    vector<LL> B(A);
    sort(all(B));
    rep(i,N)A[i]=(lower_bound(all(B),A[i]) - B.begin());

    SegTree<LL> st(200000, [](LL a, LL b){return a+b;}, 0);

    LL ans = 0;
    rep(j, N){
        auto a = A[j];
        ans += (j-st.find(0,a+1));
        st.update(a,st.arr[st.n-1+a]+1);
    }
    cout << ans << endl;

    return 0;
}

