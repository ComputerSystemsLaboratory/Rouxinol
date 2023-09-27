#include <bits/stdc++.h>
#define ll long long
#define INF 1000000005
#define MOD 1000000007
#define EPS 1e-10
#define rep(i,n) for(int i=0;i<(int)n;++i)
#define each(a, b) for(auto (a): (b))
#define all(v) (v).begin(),(v).end()
#define fi first
#define se second
#define pb push_back
#define sint(x) cout <<#x<<" = "<<(x)<<endl
#define spair(p) cout <<#p<<": "<<p.fi<<" "<<p.se<<endl
#define svec(v) cout<<#v<<":";rep(i,v.size())cout<<" "<<v[i];cout<<endl
#define sset(s) cout<<#s<<":";each(i,s)cout <<" "<<i;cout<<endl

using namespace std;


typedef pair<int,int>P;

const int MAX_N = 100005;

int main()
{
    int n,m;
    cin >> n;
    map<string,int> mp;
    int pos = 1;
    rep(i,n){
        string s;
        cin >> s;
        mp[s] = i+1;
    }
    cin >> m;
    rep(i,m){
        string s;
        cin >> s;
        if(mp[s] == 0){
            cout << "Unknown " << s << "\n";
        }else{
            if(pos == 0){
                cout << "Closed by " << s << "\n";
                pos = 1;
            }else{
                cout << "Opened by " << s << "\n";
                pos = 0;
            }
        }
    }
}