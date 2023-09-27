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

using std::cin;
using std::cout;
using std::endl;
using std::setprecision;
using std::fixed;
using std::pair;
using std::make_pair;
using std::string;
using std::vector;
using std::list;
using std::map;
using std::set;
using std::queue;
using std::priority_queue;
using std::stack;

typedef vector<int> VI;
typedef vector<vector<int> > VII;
typedef vector<string> VS;
typedef pair<int, int> PII;

int main(void) {
    int h;
    while (cin >> h) {
        if (h == 0) {
            break; 
        }
        VII table(h, VI(5));
        for (int i = 0; i < h; i++) {
            for (int j = 0; j < 5; j++) {
                cin >> table[i][j];
            }
        }

        int score = 0;
        while (1) {
            bool change = false;
            for (int i = 0; i < h; i++) {
                int j = 0;
                while (j < 3) {
                    int k;
                    for (k = j + 1; k < 5; k++) {
                        if (table[i][k] != table[i][j]) {
                            break;
                        }
                    }
                    if (k - j > 2 && table[i][j] != 0) {
                        score += (k - j) * table[i][j];
                        for (int l = j; l < k; l++) {
                            table[i][l] = 0;  
                        }
                        change = true;
                    }
                    j = k;
                }
            }

            if (! change) {
                break;
            }
            for (int i = h - 1; i > 0; i--) {
                for (int j = 0; j < 5; j++) {
                    if (table[i][j] == 0) {
                        for (int k = i - 1; k >= 0; k--) {
                            if (table[k][j] != 0) {
                                table[i][j] = table[k][j];
                                table[k][j] = 0;
                                break;
                            }
                        }
                    }
                }
            }

        }
        cout << score << endl;
    }
    return 0;
}