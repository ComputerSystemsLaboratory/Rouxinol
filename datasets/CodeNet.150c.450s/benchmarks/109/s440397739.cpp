#include <bits/stdc++.h>
using namespace std;
using vi=vector<int>;
using vvi=vector<vi>;
using vs=vector<string>;
using msi=map<string,int>;
using mii=map<int,int>;
using pii=pair<int,int>;
using vlai=valarray<int>;
using ll=long long;
#define rep(i,n) for(int i=0;i<n;i++)
#define range(i,s,n) for(int i=s;i<n;i++)
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define fs first
#define sc second

int main(){
    int n;
    while(cin>>n,n){
        vi t(24*60*60+1,0);
        string s,g;
        rep(i,n){
            cin>>s>>g;
            t[stoi(s.substr(0,2))*60*60 + stoi(s.substr(3,2))*60 + stoi(s.substr(6,2))]++;
            t[stoi(g.substr(0,2))*60*60 + stoi(g.substr(3,2))*60 + stoi(g.substr(6,2))]--;
        }
        partial_sum(all(t),t.begin());
        cout<<*max_element(all(t))<<endl;
    }
}