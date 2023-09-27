#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using vi=vector<int>;
using vvi=vector<vi>;
using vs=vector<string>;
using msi=map<string,int>;
using mii=map<int,int>;
using psi=pair<string,int>;
using pii=pair<int,int>;
using vlai=valarray<int>;
#define rep(i,n) for(int i=0;i<n;i++)
#define range(i,s,n) for(int i=s;i<n;i++)
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define fs first
#define sc second
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define INF 1e9
#define EPS 1e-9
#define MOD (1e9+7)
int main(void){
    string s;
    bool sw=true;
    int ans=0,nt=0;
    cin>>s;
    vector<int> a(s.size()),b(s.size()),d(s.size());
    rep(i,s.size()){
        char c=s[i];
        if(i==0)a[i]=max(nt,0);
        else a[i]=max(nt,a[i-1]);
        if(c=='/'){
            nt++;
        }
        else if(c=='_'){
            
        }
        else{
            nt--;
        }
        //cout<<nt+5;
    }
    //cout<<endl;
    rep(i,s.size()){
        int j=s.size()-i-1;
        char c=s[j];
        if(i==0)b[j]=nt;
        else b[j]=max(nt,b[j+1]);
        if(c=='\\'){
            nt++;
            if(i==0)b[j]=nt;
            //if(sw)b[j]=-5000000;
        }
        else if(c=='_'){
            //if(sw)b[j]=-5000000;
        }
        else{
            sw=false;
            nt--;
        }
    }
    rep(i,s.size()){
        d[i]=min(a[i],b[i]);
    }
        rep(i,s.size()){
        //cout<<d[i]+5;
    }
    // cout<<endl;
    //     rep(i,s.size()){
    //     cout<<b[i]+5;
    // }
    // cout<<endl;
    // rep(i,s.size()){
    //     cout<<d[i]+5;
    // }
    // cout<<endl;
    rep(i,s.size()){
        //cout<<d[i];
    }
    //cout<<endl;
    vi e,f;e.push_back(0);
    rep(i,s.size()){
        char c=s[i];
        if(c=='/'){
            nt++;
            if(nt<=d[i]){
                ans+=((d[i]-nt)*2+1);
                sw=true;
            }
        }
        else if(c=='_'){
            ans+=2*(d[i]-nt);
            if(nt<d[i])sw=true;
        }
        else{
            nt--;
            if(nt<d[i]){
                ans+=(d[i]-nt)*2-1;
                sw=true;
            }
        }
        //cout<<ans;
        if(nt==d[i]&&sw){
            //cout<<"!"<<i<< " "<<ans<<"?";
            e.push_back(ans);
            sw=false;
        }
        // e.push_back(ans/2);
    }
    cout<<ans/2<<endl;
    if(ans/2){
        cout<<e.size()-1<<" ";
        rep(i,e.size()-1){
            cout<<(e[i+1]-e[i])/2<<(e.size()-2!=i?" ":"");
        }
    }
    else cout<<0;
    cout<<endl;
    
}




