#include <bits/stdc++.h>
using namespace std;
using vi=vector<int>;
using vvi=vector<vi>;
using vs=vector<string>;
#define rep(i,n) for(int i=0;i<n;i++)
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()

int main(void){
    int n; cin>>n;
    vs def(n);
    rep(i,n)cin>>def[i];
    int m; cin>>m;
    bool isOpen=false;
    rep(i,m){
        string s;
        cin>>s;
        if(find(all(def),s)!=def.end()){
            isOpen^=true;
            cout<<(isOpen?"Opened by ":"Closed by ")<<s<<endl;
        }else{
            cout<<"Unknown "<<s<<endl;
        }
    }
}