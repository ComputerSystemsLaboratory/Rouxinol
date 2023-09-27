#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(),v.end()
#define _GLIBCXX_DEBUG

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using vd = vector<double>;
using vvi = vector<vi>;
using vvll = vector<vll>;
using vvd = vector<vd>;
using vvvi = vector<vvi>;
using vvvll = vector<vvll>;
using vvvd = vector<vvd>;

const double pi=acos(-1);
const ll MOD=1e9+7;
const ll INF=(1LL<<60);

int to_int(string w){
    int num1=10*(w[0]-'0')+w[1]-'0';
    int num2=10*(w[3]-'0')+w[4]-'0';
    int num3=10*(w[6]-'0')+w[7]-'0';
    return 3600*num1+60*num2+num3;
}

int main() {
    while(1){
        int n;
        cin>>n;
        if(n==0)return 0;
        vi d(3600*24+1,0);
        rep(i,n){
            string w1,w2;
            cin>>w1>>w2;
            int t1=to_int(w1),t2=to_int(w2);
            //cout<<t1<<" "<<t2<<endl;
            d[t1]+=1;
            d[t2]-=1;
        }
        int ans=0;
        int now=0;
        rep(i,3600*24){
            now+=d[i];
            ans=max(ans,now);
        }
        cout<<ans<<endl;
    }
    

    return 0;
}
