#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return true; } return false; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return true; } return false; }
#define all(x) (x).begin(),(x).end()
#define fi first
#define se second
#define mp make_pair
#define si(x) int(x.size())
const int mod=1000000007,MAX=200005,INF=1<<30;

bool add(vector<ll>& v,ll x) {
    for(auto e:v){
        chmin(x,x^e);
    }
    if(x){
        v.push_back(x);
        return 1;
    }
    return 0;
}

int main(){
    
    std::ifstream in("text.txt");
    std::cin.rdbuf(in.rdbuf());
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    int Q;
    cin>>Q;
    while(Q--){
        int N;cin>>N;
        vector<ll> A(N),v;
        for(int i=0;i<N;i++) cin>>A[i];
        string S;cin>>S;
        
        bool ans=false;
        
        for(int i=N-1;i>=0;i--){
            if(S[i]=='0'){
                add(v,A[i]);
            }else{
                if(add(v,A[i])) ans=1;
            }
        }
        
        if(ans) cout<<1<<"\n";
        else cout<<0<<"\n";
    }
}

