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

int n;

int main()
{
    while(1){
        cin >> n;
        if(n == 0){
            break;
        }
        vector<int> vec(n);
        rep(i,n){
            cin >> vec[i];
        }
        int ans = INF;
        rep(i,n){
            for(int j = i+1;j<n;j++){
                ans = min(ans,abs(vec[i]-vec[j]));
            }
        }
        cout << ans << "\n";
    }
}