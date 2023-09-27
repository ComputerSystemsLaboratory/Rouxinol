#include<bits/stdc++.h>
using namespace std;
#define int long long
#undef int
#define mk make_pair
#define pb push_back
typedef pair<int, int> pii;
const int mod = 1000000007;
const int INF = 1000000009;


signed main()
{
    int x, y;
    while(cin >> x >> y, x || y){
        printf("%d %d\n", min(x, y), max(x, y));
    }

    return 0;
}

/*



*/

