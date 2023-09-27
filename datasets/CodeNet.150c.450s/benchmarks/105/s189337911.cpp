#pragma GCC optimize("O3")

#include "bits/stdc++.h"
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef long long ll;
tree<int,int,greater<int>,rb_tree_tag,tree_order_statistics_node_update> map_t;
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define F0R(i, a) for(int i = 0; i < (a); ++i)
#define sz(x) (int)x.size()
#define SORT(x) sort(x.begin(),x.end())
#define ERASE(x) x.erase(unique(x.begin(),x.end()),x.end())
#define POSL(x,v) (lower_bound(x.begin(),x.end(),v)-x.begin())
#define POSU(x,v) (upper_bound(x.begin(),x.end(),v)-x.begin())
#define REV(x) reverse(x.begin(),x.end())
int dx[]={-1,0,1,0};
int dy[]={0,-1,0,1};
const int LOG=64;
ll basis[LOG];

void insertVector(ll mask) {
    F0R(i,LOG) {
        if((mask&(1LL<<i))==0) continue;
        if(!basis[i]) {
            basis[i]=mask;
            return;
        }
        mask^=basis[i];
    }
}

bool checkVector(ll mask) {
    F0R(i,LOG) {
        if((mask&(1LL<<i))==0) continue;
        if(!basis[i])
            return false;
        mask^=basis[i];
    }
    return true;
}

int main() {
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tt;
    cin >> tt;
    while(tt--) {
        int n;
        cin >> n;
        memset(basis,0,sizeof(basis));
        vector<ll> arr(n);
        F0R(i,n)
            cin >> arr[i];
        string s;
        cin >> s;
        for(int i=n-1; ~i; i--) {
            if(s[i]=='0')
                insertVector(arr[i]);
            else {
                if(!checkVector(arr[i])) {
                    cout << "1\n";
                    goto end;
                }
            }
        }
        cout << "0\n";
        end:;
    }

    return 0;
}
