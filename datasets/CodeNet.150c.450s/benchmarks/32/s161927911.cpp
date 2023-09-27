#include<bits/stdc++.h>
using namespace std;

#define int long long
typedef vector<int>vint;
typedef pair<int,int>pint;
typedef vector<pint>vpint;
#define rep(i,n) for(int i=0;i<(n);i++)
#define reps(i,f,n) for(int i=(f);i<(n);i++)
#define all(v) (v).begin(),(v).end()
#define each(it,v) for(__typeof((v).begin()) it=(v).begin();it!=(v).end();it++)
#define pb push_back
#define fi first
#define se second
template<typename A,typename B>inline void chmin(A &a,B b){if(a>b)a=b;}
template<typename A,typename B>inline void chmax(A &a,B b){if(a<b)a=b;}


signed main(){
    int M,L,R;
    while(cin>>M>>L>>R,M||L||R){
        vint P(M);rep(i,M)cin>>P[i];
        sort(all(P));reverse(all(P));

        int val=0,ma=0;
        for(int i=L-1;i<R;i++){
            int tmp=P[i]-P[i+1];
            if(tmp>=val){
                val=tmp;
                ma=i+1;
            }
        }
        cout<<ma<<endl;
    }
    return 0;
}