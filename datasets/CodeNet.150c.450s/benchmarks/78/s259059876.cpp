#include <map>
#include <set>
#include <list>
#include <cstdio>
#include <cmath>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cctype>
#include <string>
#include <vector>
#include <cstdlib>
#include <cstring>
#include <iomanip>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <functional>

using namespace std;

#define fr first
#define sc second
#define mp make_pair

typedef long long int64;
typedef pair< int, int > iP;
typedef pair< iP, int > iiP;

const int INF = 2 << 28;
const double EPS = 1e-10;

int dp1[1000001 * 2], dp2[1000001 * 2];
int main() {

    fill_n(dp1, 1000001 * 2, INF);
    fill_n(dp2, 1000001 * 2, INF);
    vector< int > p;
    for(int i = 1; i * (i + 1) * (i + 2) / 6 <= 1000000; i++) {
        int v = i * (i + 1) * (i + 2) / 6;
        p.push_back(v); dp1[v] = 1;
        if(v % 2) dp2[v] = 1;
    }
    for(int i = 1; i < 1000001; i++) {
        if(dp1[i] != INF) {
            for(int j = 0; j < p.size(); j++) {
                dp1[i + p[j]] = min(dp1[i + p[j]], dp1[i] + 1);
                if(p[j] % 2) dp2[i + p[j]] = min(dp2[i + p[j]], dp2[i] + 1);
            }
        }
    }

    int N;
    while(cin >> N, N) {
        cout << dp1[N] << " " << dp2[N] << endl;
    }
}