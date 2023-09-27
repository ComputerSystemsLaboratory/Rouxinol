#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int (i)=0;(i)<(int)(n);++(i))
#define all(x) (x).begin(),(x).end()
#define pb push_back
#define fi first
#define se second
#define dbg(x) cout<<#x" = "<<((x))<<endl
template<class T,class U> ostream& operator<<(ostream& o, const pair<T,U> &p){o<<"("<<p.fi<<","<<p.se<<")";return o;}
template<class T> ostream& operator<<(ostream& o, const vector<T> &v){o<<"[";for(T t:v){o<<t<<",";}o<<"]";return o;}

int main()
{
    int n;
    while(cin >>n,n)
    {
        vector<int> a(n);
        rep(i,n) cin >>a[i];

        int ans = 19191919;
        rep(i,n)rep(j,i) ans = min(ans,abs(a[i]-a[j]));
        cout << ans << endl;
    }
    return 0;
}