#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>

using namespace std;
using namespace __gnu_pbds;

#define pb push_back
#define pp pop_back
#define f first
#define s second
#define sz(a) (int)((a).size())
#define NoType ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL)
#define mp make_pair

typedef tree<int, null_type, less<int>,rb_tree_tag, tree_order_statistics_node_update> indexed_set;
//find_by_order(x) -> returns an iterator to the element at a given position
//order_of_key(x) -> returns the position of a given element

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair < int, int > pi;

const int mod = (int)1e9 + 7;
const int MAXN = 1e5+12;
//indexed_set s;

int n;
int q,w,e,r;

int main() {

    cin >> n;
    for (int i = 1; i <= n; i++) {
        string s = "";
        cin >> s;
        if (s == "AC")q++;
        if (s == "WA")w++;
        if (s == "TLE")e++;
        if (s == "RE")r++;
    }

    cout << "AC x " << q << endl;

    cout << "WA x " << w << endl;

    cout << "TLE x " << e << endl;
    cout << "RE x " << r << endl;

return 0;
}
