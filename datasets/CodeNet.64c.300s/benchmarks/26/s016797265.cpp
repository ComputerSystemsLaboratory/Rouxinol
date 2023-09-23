#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <cmath>
#include <set>
#include <algorithm>
#include <iomanip>

typedef long long ll;
const ll MOD = 1e9 + 7;
const long long INF = 1LL<<60;
const double PI=3.14159265358979323846;
const int NMAX=100005;
using namespace std;


int main(){
    ll m,n;
    cin >> m >> n;

    ll ans = 1;
    while(n > 0){
        if(n&1) ans = ans*m %MOD;
        m = m*m%MOD;
        n >>= 1;
    }

    cout << ans << endl;

    return 0;
}
