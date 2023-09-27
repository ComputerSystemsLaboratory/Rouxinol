#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i,n)   FOR(i,0,n)
#define pb emplace_back
typedef long long ll;
typedef pair<int,int> pint;

struct node{int l,r,key;};
node t[500001];
int sz;
vector<int> preord,inord;
void dfs(int vi){
    preord.pb(t[vi].key);
    if(t[vi].l!=-1)dfs(t[vi].l);
    inord.pb(t[vi].key);
    if(t[vi].r!=-1)dfs(t[vi].r);
 
}
int main(){
    int n,k;
    cin>>n;
    string s;
    rep(i,n){
        cin>>s;
        if(s[0]=='i'){
            cin>>k;
            int cur=0;
            while(cur<sz){
                if(k>t[cur].key){
                    if(t[cur].r!=-1) cur=t[cur].r;
                    else{
                        t[cur].r=sz;break;
                    }
                }
                else{
                    if(t[cur].l!=-1) cur=t[cur].l;
                    else{
                        t[cur].l=sz;break;
                    }
                }
            }
            t[sz].l=t[sz].r=-1;
            t[sz].key=k;++sz;
        }
        else{
            preord.clear(),inord.clear();
            dfs(0);
            int m=inord.size();
            rep(i,m) cout<<" "<<inord[i];
            cout<<endl;
            rep(i,m) cout<<" "<<preord[i];
            cout<<endl;
        }
    }
    return 0;
}
