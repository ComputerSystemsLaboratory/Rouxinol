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

int H, mas[20][6];
int ans;


bool canDelete() {
    bool ret = false;
    for(int i = 0; i < H; i++) {
        int prev = -1, cnt = 0;
        for(int j = 0; j < 6; j++) {
            if(!(~prev)|| mas[i][j] == prev) cnt++, prev = mas[i][j];
            else {
                if(cnt >= 3) {
                    if(prev) ret = true;
                    ans += prev * cnt;
                    for(int k = j - 1; k >= j - cnt; k--)
                        mas[i][k] = 0;
                }
                cnt = 1;
                prev = mas[i][j];
            }
        }
    }
    return ret;
}

void drop() {
    for(int i = H - 1; i > 0; i--) {
        for(int j = 0; j < 5; j++) {
            if(mas[i][j] == 0) {
                for(int k = i - 1; k >= 0; k--) {
                    if(mas[k][j] != 0) {
                        mas[i][j] = mas[k][j];
                        mas[k][j] = 0;
                        break;
                    }
                }
            }
        }
    }
}

int main() {

    while(cin >> H, H) {
        ans = 0;
        memset(mas, 0, sizeof(mas));
        for(int i = 0; i < H; i++) {
            for(int j = 0; j < 5; j++) {
                cin >> mas[i][j];
            }
        }

        while(canDelete()) {
            drop();
        }
        cout << ans << endl;
    }
}