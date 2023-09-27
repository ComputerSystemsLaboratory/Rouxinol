#include <bits/stdc++.h>
using namespace std;
using vi=vector<int>;
using vvi=vector<vi>;
using vs=vector<string>;
using msi=map<string,int>;
#define rep(i,n) for(int i=0;i<n;i++)
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
vvi f;
int ans=0;
void search(int x,int y){
    vi v={1,0,-1,0,1};
    rep(i,4){
        if(f[y+v[i]][x+v[i+1]]==1){
            f[y+v[i]][x+v[i+1]]=0;
            ans++;
            search(x+v[i+1],y+v[i]);
        }
    }
}

int main(void){
    int w,h;
    while(cin>>w>>h,w){
        ans=0;
        f=vvi(h+2,vi(w+2,0));
        int x,y;
        rep(i,h)rep(j,w){
            char c; cin>>c;
            if(c=='.')f[i+1][j+1]=1;
            if(c=='@')y=i+1,x=j+1;
        }
        search(x,y);
        cout<<ans+1<<endl;
    }
}