
// --------------------<optimizations>--------------------
#pragma GCC optimize("O3")

//(UNCOMMENT WHEN HAVING LOTS OF RECURSIONS)
#pragma comment(linker, "/stack:200000000")
//(UNCOMMENT WHEN TRYING TO BRUTEFORCE WITH A LOT OF LOOPS)
#pragma GCC optimize("unroll-loops")
// -------------------</optimizations>--------------------
#include <iostream>
#include <bitset>
#include <algorithm>        // sort()
#include <vector>           // for vectors
#include <map>              // for ordered map
#include <unordered_map>
#include <list>             // for list
#include <iomanip>          // for setprecision()
#include <cmath>            // for pow(), sqrt(), log(), log10(), ....
#include <cstring>          // for memset()
#include <unordered_set>    // for unordered_set
#include <climits>          // for INT_MAX & INT_MIN
#include <set>              // for ordered set

#define C ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
#define INF INT_MAX
#define NINF INT_MIN
#define MOD 1000000007
const double pi=acos(-1); // value of pi


bool isVowel(char ch) {
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u') {
        return 1;
    }
    return 0;
}

bool compare(pair<ll, ll> a, pair<ll, ll> b) {
    return a.second<b.second;
}


bool isPrime(ll n) {
    for(ll i=3; i*i<=n; i+=2) {
        if(n%i==0) {
            return false;
        }
    }
    return true;
}

map<ll, list<ll>> m;
// map<ll, ll> m;

int main() {
    C
//     freopen("input.txt","r",stdin);
// 	freopen("output.txt","w",stdout);
    int t=1;
    //cin >> t;
    while(t--) {
        ll d, x, res=0;
        cin >> d;
        ll c[26];
        ll arr[d][26];
        ll la[26];
        for(ll i=0; i<26; i++) {
            cin >> c[i];
            la[i]=-1;
        }
        for(ll i=0; i<d; i++) {
            for(ll j=0; j<26; j++) {
                cin >> arr[i][j];
            }
        }
        for(ll i=0; i<d; i++) {
            cin >> x;
            x--;
            la[x]=i;
            res+=arr[i][x];
            for(ll j=0; j<26; j++) {
                res-=((c[j])*(i-la[j]));
            }
            cout << res << endl;
        }
    }
}
