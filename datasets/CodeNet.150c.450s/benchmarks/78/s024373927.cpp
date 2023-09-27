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

#define INF (int)1e09

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
    int bas = 0;
    int tri = 0;
    int fou = 0;

    VI total;
    VI odd;

    VI ans_total(1e06, INF);
    VI ans_odd(1e06, INF);

    while (1) {
        bas++;
        tri += bas;
        fou += tri;
        if (fou >= 1e06) {
            break;
        }
        total.push_back(fou);
        ans_total[fou] = 1;
        if (fou % 2 == 1) {
            odd.push_back(fou);
            ans_odd[fou] = 1;
        }

    }
    int size_total = (int)total.size();
    int size_odd = (int)odd.size();
    int posi;

    for (int i = 0; i < size_total; i++) {
        posi = total[i];
        for (int j = posi + 1; j < 1e06; j++) {
            ans_total[j] = min(ans_total[j], ans_total[posi] + ans_total[j - posi]);
        }
    }
    for (int i = 0; i < size_odd; i++) {
        posi = odd[i];
        for (int j = posi + 1; j < 1e06; j++) {
            ans_odd[j] = min(ans_odd[j], ans_odd[posi] + ans_odd[j - posi]);
        }
    }

    int input;
    while (1) {
        cin >> input;
        if (input == 0) {
            break;
        }
        cout << ans_total[input] << " " << ans_odd[input] << endl;
    }
    return 0;
}