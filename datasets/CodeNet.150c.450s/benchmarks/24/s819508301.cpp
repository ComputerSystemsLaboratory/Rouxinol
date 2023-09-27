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

int main() {

    int N, M;
    while(cin >> N >> M, N) {
        int ans = 0;
        vector< iP > edge(N);
        for(int i = 0; i < N; i++) {
            int d, p; cin >> d >> p;
            edge[i] = iP(p, d);
        }
        sort(edge.begin(), edge.end(), greater< iP >());
        for(int i = 0; i < N; i++) {
            if(M > 0) {
                if(edge[i].sc <= M) M -= edge[i].sc;
                else {
                    ans += edge[i].fr * (edge[i].sc - M);
                    M = 0;
                }
            } else ans += edge[i].sc * edge[i].fr;
        }
        cout << ans << endl;
    }
}