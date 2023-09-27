#include "bits/stdc++.h"

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pii;
typedef long long ll;

#define dump(x)  cerr << #x << " = " << (x) << endl
#define rep(i,n) for(ll i=0;i<(ll)(n);i++)
#define all(a)  (a).begin(),(a).end()
#define pb push_back

int main(){
    string s;
    getline(cin,s);
    vector<string> str;
    s+=" ";
    string buf="";
    rep(i,s.size()){
        if(s[i]!=' '){
            buf+=s[i];
        }
        else{
            str.pb(buf);
            buf="";
        }
    }
    map<string,int> mp;
    rep(i,str.size()){
        mp[str[i]]++;
    }
    string ans="";
    int n=-1;
    rep(i,str.size()){
        if(mp[str[i]]>n){
            ans = str[i];
            n=mp[str[i]];
        }
    }
    string l="";
    int num=-1;
    rep(i,str.size()){
        if((int)(str[i].size())>num){
            num=str[i].size();
            l=str[i];
        }
    }
    cout<<ans<<" "<<l<<endl;
}