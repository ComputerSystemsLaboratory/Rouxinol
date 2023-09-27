#include <bits/stdc++.h>
using namespace std;
using ll=long long;
const ll MOD=(ll)1e9+7;
//const ll MOD=(ll)998244353;
const ll INF=(ll)1e18+10;
const double PI = 2.0*acos(0);

template<class T> bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T> bool chmin(T &a, const T &b) { if (a>b) { a=b; return 1; } return 0; }
int dy[]={-1,1,0,0};
int dx[]={0,0,-1,1};

struct BIT{ //sample add
    vector<int> data;
    int nodes;

    BIT(int N){
        nodes=N;
        data.resize(nodes*2+1);
        for(auto i:data) i=0; //initialize;
    }

    void add(int k,int a){ //add a to element k
        k++;
        int tmp=0;
        while(k<=nodes){
            data[k]+=a;
            k += k & -k;
            //cout<<k<<endl;
            if(tmp>10) break;
        }
    }

    ll sum(int i){ //calc sum of [0,i)
        //i++;
        ll ret = 0ll;
        while(i>0){
            ret+=data[i];
            i -= i & -i;
        }
        return ret;
    }

    ll sum(int a,int b){ //[a,b)
        if(a>=b) return 0;
        return sum(b+1);
    }
};

void solve(int ca){
    int N; cin>>N;
    vector<int> a(N);
    for (int i = 0; i < N; ++i) {
        cin>>a[i];
    }
    vector<int> sorted=a,zaatsu(N);
    sort(sorted.begin(),sorted.end());
    for (int i = 0; i < N; ++i) {
        zaatsu[i]=lower_bound(sorted.begin(), sorted.end(), a[i]) - sorted.begin();
        //cout<<zaatsu[i]<<endl;
    }
    BIT bit = BIT(N+10);
    ll ans = 0ll;
    for (int i = 0; i < N; ++i) {
        bit.add(zaatsu[i],1);
        ans+=(ll)i-bit.sum(zaatsu[i]);
        //cout<<i<<" "<<ans<<endl;
    }
    cout<<ans<<endl;
}

//#define MULTI
int main() {
#ifdef MULTI
    int N; cin>>N;
    for (int i = 0; i < N; ++i) {
        solve(i+1);
    }
#else
    solve(0);
#endif
    return 0;
}

