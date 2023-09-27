#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define mp make_pair
#define pb push_back
#define lp(i,s,f) for(ll i = s; i < ll(f); i++)
#define inF freopen("input.in", "r", stdin);
#define outF freopen("output.in", "w", stdout);
#define endl '\n'
#define MOD 1000000007
#define mm(arr) memset(arr, 0, sizeof(arr))

int main(){
    FAST
    int n; cin >> n;
    map<string, int> cnt;
    while(n -- ){
        string s; cin >> s;
        cnt[s]++;
    }
    string arr[4] = {"AC", "WA", "TLE", "RE"};
    for(int i = 0; i < 4; i++){
        cout << arr[i] << " x " << cnt[arr[i]] << endl;
    }
    return 0;
}
