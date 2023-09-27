#include <iostream> // cout, endl, cin
#include <string> // string, to_string, stoi
#include <vector> // vector
#include <algorithm> // min, max, swap, sort, reverse, lower_bound, upper_bound
#include <utility> // pair, make_pair
#include <tuple> // tuple, make_tuple
#include <cstdint> // int64_t, int*_t
#include <cstdio> // printf
#include <map> // map
#include <queue> // queue, priority_queue
#include <set> // set
#include <stack> // stack
#include <deque> // deque
#include <unordered_map> // unordered_map
#include <unordered_set> // unordered_set
#include <bitset> // bitset
#include <cctype> // isupper, islower, isdigit, toupper, tolower
#include <math.h>
#include <iomanip>
using namespace std;
#define int long long

signed main(){
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);

    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0;i < n;i ++) cin >> a.at(i);

    int q; cin >> q;
    vector<int> b(q),c(q);
    for(int i = 0;i < q;i ++) cin >> b.at(i) >> c.at(i);

    vector<int> count(100001);
    for(int i = 0;i < n;i ++) count.at(a.at(i)) ++;
    int sum = 0;
    for(int i = 0;i < n;i ++) sum += a.at(i);

    for(int i = 0;i < q;i ++){
        sum -= count.at(b.at(i)) * b.at(i);
        sum += count.at(b.at(i)) * c.at(i);

        count.at(c.at(i)) += count.at(b.at(i));
        count.at(b.at(i)) = 0;
        cout << sum << endl;
    }
}