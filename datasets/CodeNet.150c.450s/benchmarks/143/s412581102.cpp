#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
#define INF 1000000000 // 1 billion, safer than 2B for Floyd Warshall’s
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pcont(x) for(auto i: x){cout << i << " ";} cout << "\n";

int main(){
    IOS;
    int n;
    cin >> n;
    vector<ll> a(n);
    ll sum = 0;
    map<int, int> m;
    for(int i = 0; i<n; i++){
        cin >> a[i];
        sum += a[i];
        m[a[i]]++;
    }

    int q;
    cin >> q;
    while(q--){
        int b, c;
        cin >> b >> c;
        ll changed = (ll)m[b];
        sum += changed*((ll)(c-b));
        m[b] -= changed;
        m[c] += changed;
        cout << sum << "\n";
    }
    return 0;
}