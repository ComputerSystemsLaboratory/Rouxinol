#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using ld=long double;

#define rep(i,N) for(int i=0;i<(int)(N);++i)
#define rrep(i,N) for(int i=(int)(N)-1;i>=0;--i)
#define debug(x) cout<<#x<<"="<<x<<endl;
constexpr ll MOD=1000000007;
constexpr ll INF=1LL<<60;
template<class T> inline bool chmin(T& a,T b){if(a>b){a=b;return true;}return false;}
template<class T> inline bool chmax(T& a,T b){if(a<b){a=b;return true;}return false;}
template<typename T> void fail(T v){cout << v << endl;exit(0);}
//template end

void solve(){
    int N;
    while((scanf("%d",&N),N)){
        vector<int> imos(101010);
        rep(i,N){
            int a,b,c;
            scanf("%d:%d:%d",&a,&b,&c);
            imos[a*3600+b*60+c]++;
            scanf("%d:%d:%d",&a,&b,&c);
            imos[a*3600+b*60+c]--;
        }
        rep(i,101001)imos[i+1]+=imos[i];
        printf("%d\n",*max_element(imos.begin(),imos.end()));
    }
}

int main(){
    //cin.tie(0);
    //ios::sync_with_stdio(false);
    //cout << fixed << setprecision(20);
    solve();
    return 0;
}
