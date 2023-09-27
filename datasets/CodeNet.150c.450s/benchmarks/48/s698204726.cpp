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
        int e;
        cin >> e;
        if(e == 0){
            break;
        }
        int z = 0;
        while(z*z*z <= e){
            z++;
        }
        int ans = INF;
        for(int i=0;i<z;i++){
            int rem = e - i*i*i;
            int y = 0;
            while(y*y <= rem){
                y++;
            }
            for(int j=0;j<y;j++){
                int x = rem - j*j;
                ans = min(ans,x+i+j);
            }
        }
        cout << ans << "\n";
    }

}