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

using namespace std;

typedef vector<int> VI;
typedef vector<vector<int> > VVI;
typedef vector<string> VS;
typedef pair<int, int> PII;
typedef pair<int, PII> PIII;

int main(void) {
    while(true) {
        int x, y, s;
        cin >> x >> y >> s;
        if (x == 0) {
            break;
        }
        int nmax = 0;
        for (int i = 1; i < s; i++) {
            for (int j = i; j < s; j++) {
                int first = i * (100 + x) / 100;
                int second = j * (100 + x) / 100;
                if (first + second == s) {
                    int new_first = i * (100 + y) / 100;
                    int new_second = j * (100 + y) / 100;
                    nmax = max(nmax, new_first + new_second);
                }
            }
        }
        cout << nmax << endl;
    }
    return 0;
}