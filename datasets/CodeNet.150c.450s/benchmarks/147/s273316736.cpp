#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
typedef long double ld;
typedef long long ll;
const int MOD =  1000000007;
const int IINF = INT_MAX;
const ll INF = 1LL << 60;


int main() {
    int n; cin >> n;

    V<int> ans(10050);
    for(int x = 1; x <= 100; x++){
        for(int y = 1; y <= 100; y++){
            for(int z = 1; z <= 100; z++){
                int sum = x*x + y*y + z*z + x*y + y*z + z*x;
                if(sum < 10050) ans[sum]++;
            }
        }
    }
    for(int i = 1; i <= n; i++){
        cout << ans[i] << endl;
    }


    return 0;
}
