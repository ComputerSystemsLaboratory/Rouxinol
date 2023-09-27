#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i,n)   FOR(i,0,n)
#define pb emplace_back
typedef long long ll;
typedef pair<int,int> pint;

vector<int> v;
int main(){
    int n;
    string s;
    int cnt=0,ans,j;
    while(cin>>s>>n,n){
        v.clear();
        v.pb(stoi(s));
        ans=-1;cnt=0,j=-1;
        while(1){
            while(s.size()!=n) s+='0';
            sort(s.begin(),s.end());
            string t=s;
            reverse(t.begin(),t.end());
            int nx=stoi(t)-stoi(s);
            rep(i,v.size()){
                if(v[i]==nx){
                    j=i,ans=nx;
                    break;
                }
            }
            if(ans!=-1) break;
            v.pb(nx);
            s=to_string(nx);
            ++cnt;
        }
        cout<<j<<" "<<ans<<" "<<cnt-j+1<<endl;
    }
    return 0;
}
