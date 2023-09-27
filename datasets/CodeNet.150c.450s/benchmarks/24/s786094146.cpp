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
#define show(x) cout <<#x<<" = "<<(x)<<endl
#define spair(p) cout <<#p<<": "<<p.fi<<" "<<p.se<<endl
#define svec(v) cout<<#v<<":";rep(i,v.size())cout<<" "<<v[i];cout<<endl
#define sset(s) cout<<#s<<":";each(i,s)cout <<" "<<i;cout<<endl

using namespace std;

typedef pair<int,int>P;

const int MAX_N = 100005;

int main()
{
    while(1){
        int n,m;
        cin >> n >> m;
        if(n == 0){
            break;
        }
        int cnt[11];
        fill(cnt,cnt+11,0);
        int ans = 0;
        rep(i,n){
            int a,b;
            cin >> a >> b;
            cnt[b] += a;
            ans += a*b;
        }
        int hoge = 10;
        int rem = m;
        while(hoge >= 0){
            if(rem - cnt[hoge] >= 0){
                rem -= cnt[hoge];
                ans -= cnt[hoge]*hoge;
                hoge--;
            }else{
                ans -= rem*hoge;
                break;
            }
        }
        cout << ans << "\n";
    }
}