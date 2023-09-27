//
// Created on 2020/07/21.
//


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
#include <ios>
#include <iomanip>
#include <numeric>

#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
typedef long long ll;
using namespace std;
const long long LINF =1e18;
const int INF = 1e9;


int main() {
    int d;
    cin>>d;
    vector<int>c(26);
    vector<int>last(26,0);
    vector<vector<int>>s(d+1,vector<int>(26));
    for (int i = 0; i < 26; ++i) {
        cin>>c[i];
    }
    for (int i = 1; i <= d; ++i) {
        for (int j = 0; j < 26; ++j) {
            cin>>s[i][j];
        }
    }
    int final_score = 0;
    for (int k = 1; k <= d; ++k) {
        int today_score = 0;
        int t;
        cin>>t;
        t--;
        today_score += s[k][t];
        last[t] = k;
        for (int i = 0; i < 26; ++i) {
            today_score -= c[i] * abs(k - last[i]);
        }
        final_score += today_score;
        cout<<final_score<<endl;
    }

    return 0;
}
