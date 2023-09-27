#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); ++i)
#define rrep(i,n) for(int i = 1; i <= (n); ++i)
#define drep(i,n) for(int i = (n)-1; i >= 0; --i)
#define srep(i,s,t) for (int i = s; i < t; ++i)
using namespace std;
typedef long long int ll;
typedef pair<int,int> P;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vl;
typedef vector<P> vp;
#define dame { puts("-1"); return 0;}
#define yn {puts("Yes");}else{puts("No");}

ll mergecount(vector<int> &a) {
    ll count = 0;
    int n = a.size();
    if (n > 1) {
        vector<int> b(a.begin(), a.begin() + n/2);
        vector<int> c(a.begin() + n/2, a.end());
        count += mergecount(b);
        count += mergecount(c);
        for (int i = 0, j = 0, k = 0; i < n; ++i)
        if (k == c.size())       a[i] = b[j++];
        else if (j == b.size())  a[i] = c[k++];
        else if (b[j] <= c[k])   a[i] = b[j++];
        else                   { a[i] = c[k++]; count += n/2 - j; }
    }
    return count;
}

int main() {
    int n; cin >> n;
    vector<int> a;
    rep(i,n){
        int a_; cin >> a_;
        a.push_back(a_);
    }

    ll ans = mergecount(a); 

    cout << ans << endl;
    return 0;
}
 
 

