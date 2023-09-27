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

template <typename T> using Vec = vector<T>; // c++11
typedef pair<int, int> PII;
typedef pair<int, pair<int, int> > PIII;

void dump(Vec<Vec<int> >& table, int h);

int del(Vec<Vec<int> >& table, int h) {
    int score = 0;
    for (int i = 0; i < h; i++) {
        for (int j = 0; j <= 2; j++) {
            int end = j + 1;
            while (1) {
                if (table[i][j] == table[i][end]) {
                    end++;
                } else {
                    end--;
                    break;
                }
            }
            if (end - j >= 2) {
                score += table[i][j] * (end - j + 1);
                for (int k = j; k <= end; k++) {
                    table[i][k] = -k;
                }
                break;
            }
        }
    }
    return score;
}

void drop(Vec<Vec<int> >& table, int h) {
    while (1) {
        Vec<Vec<int> > new_table = table;
        for (int i = h - 1; i > 0; i--) {
            for (int j = 0; j < 5; j++) {
                if (new_table[i][j] == -j) {
                    new_table[i][j] = new_table[i - 1][j];
                    new_table[i - 1][j] = -j;
                }
            }
        }

        if (new_table == table) {
            break;
        } else {
            table = new_table;
        }
    }
    return;
}

int main(void) {
    while (1) {
        int h;
        cin >> h;
        if (h == 0) {
            break;
        }
        Vec<Vec<int> > table(h, Vec<int>(5));
        for (int i = 0; i < h; i++) {
            for (int j = 0; j < 5; j++) {
                cin >> table[i][j];
            }
        }
        int score = 0;
        while (1) {
            int this_score = del(table, h);
            if (this_score == 0) {
                break;
            } else {
                score += this_score;
                drop(table, h);
            }
        }
        cout << score << endl;
    }

    return 0;
}

void dump(Vec<Vec<int> >& table, int h) {
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < 5; j++) {
            cout << table[i][j] << " ";
        }
        cout << endl;
    }
    return;
}