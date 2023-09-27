#include<bits/stdc++.h>
using namespace std;

#define REP(i,n) for(int i=0;i<(n);i++)
#define ALL(v) (v).begin(),(v),end()
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
    set<string> st;
    REP(i,n){
        string s; cin>>s;
        st.insert(s);
    }
    
    int m; cin>>m;
    bool locked=true;
    REP(i,m){
        string s; cin>>s;
        if(st.count(s)){
            locked=!locked;
            cout<<(locked?"Closed by ":"Opened by ");
        } else{
            cout<<"Unknown ";
        }
        cout<<s<<endl;
    }
        
}