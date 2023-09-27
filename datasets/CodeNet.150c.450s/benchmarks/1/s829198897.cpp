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
    ll n;
    cin >> n;
    vector<ll> a(n);
    for(ll i = 0; i < n; i++){
        cin >> a[i];
    }

    vector<ll> dp;
    dp.push_back(a[0]);
    for(int i = 1; i < n; i++){
        auto it = lower_bound(dp.begin(),dp.end(),a[i]);
        if(it == dp.end()){
            dp.push_back(a[i]);
        } else {
            (*it) = a[i];
        }
    }

    cout << dp.size() << endl;

    return 0;
}
