#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <stack>

#define INF 1e09

using std::cin;
using std::cout;
using std::endl;
using std::setprecision;
using std::fixed;
using std::pair;
using std::make_pair;
using std::min;
using std::max;
using std::string;
using std::vector;
using std::list;
using std::map;
using std::set; // insert erase find count
using std::queue;
using std::priority_queue;
using std::stack;

typedef vector<int> VI;
typedef vector<vector<int> > VVI;
typedef vector<string> VS;
typedef pair<int, int> PII;
typedef pair<int, pair<int, int> > PIII;

int main(void) {
    while(1) {
        int n;
        cin >> n;
        if (n == 0) {
            break;
        }
        VI time(60 * 60 * 24 + 1);
        for (int i = 0; i < n; i++) {
            int s_h;
            int s_m;
            int s_s;
            int e_h;
            int e_m;
            int e_s;
            scanf("%d:%d:%d %d:%d:%d", &s_h, &s_m, &s_s, &e_h, &e_m, &e_s);
            int start = 60 * 60 * s_h + 60 * s_m + s_s;
            int end = 60 * 60 * e_h + 60 * e_m + e_s;
            for (int j = start; j < end; j++) {
                time[j]++;
            }
        }
        int res = 0;
        for (int i = 0; i < (int)(time.size()); i++) {
            res = std::max(res, time[i]);
        }
        cout << res << endl;
    }
    return 0;
}