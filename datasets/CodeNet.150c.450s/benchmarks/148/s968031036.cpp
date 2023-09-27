#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> P;
const ll mod = 1000000007;
const ll INF = 1e+14;
#define rep(i,n) for(int i=0;i<n;i++)
#define per(i,n) for(int i=n-1;i>=0;i--)
#define Rep(i,sta,n) for(int i=sta;i<n;i++)
#define rep1(i,n) for(int i=1;i<=n;i++)
#define per1(i,n) for(int i=n;i>=1;i--)
#define Rep1(i,sta,n) for(int i=sta;i<=n;i++)
#define _GLIBCXX_DEBUG

int main(){
    int n; cin>>n;
    vector<string> s;
    rep(i,n){
        string v;
        cin>>v;
        s.push_back(v);
    }
    int ac=0;
    int wa=0;
    int tle=0;
    int re=0;
    rep(i,n){
        if(s[i]=="AC") ac++;
        if(s[i]=="WA") wa++;
        if(s[i]=="TLE") tle++;
        if(s[i]=="RE") re++;
    }
    cout<<"AC"<<" "<<"x"<<" "<<ac<<endl;
    cout<<"WA"<<" "<<"x"<<" "<<wa<<endl;
    cout<<"TLE"<<" "<<"x"<<" "<<tle<<endl;
    cout<<"RE"<<" "<<"x"<<" "<<re<<endl;
}
