#include<bits/stdc++.h>
using namespace std;

#define REP(i,n) for(int i=0;i<(n);i++)
#define ALL(v) (v).begin(),(v).end()
#define pb push_back
typedef long long ll;
typedef pair<int,int> P;

template<typename A,typename B> inline void chmin(A &a,B b){if(a>b) a=b;}
template<typename A,typename B> inline void chmax(A &a,B b){if(a<b) a=b;}
//-----------------------------------------------------------------------

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    int n; cin>>n;
    vector<string> vs(n);
    REP(i,n){
        string s; cin>>s;
        vs.pb(s);
    }
    sort(ALL(vs));

    int m; cin>>m;
    bool f=false;
    REP(i,m){
        string s; cin>>s;
        if(!binary_search(ALL(vs),s)){
            cout<<"Unknown "<<s<<endl;
        } else{
            f=!f;
            if(f) cout<<"Opened by "<<s<<endl;
            else cout<<"Closed by "<<s<<endl;
        }
    }

}