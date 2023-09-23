#include<bits/stdc++.h>
using namespace std;
#define int long long
#undef int
#define mk make_pair
#define pb push_back
typedef pair<int, int> pii;
const int mod = 1000000007;
const int INF = 1000000009;

int W, H, x, y, r;

signed main()
{
    cin >> W >> H >> x >> y >> r;
    if(0 <= x - r && x + r <= W && 0 <= y - r && y + r <= H){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }

    return 0;
}

/*



*/

