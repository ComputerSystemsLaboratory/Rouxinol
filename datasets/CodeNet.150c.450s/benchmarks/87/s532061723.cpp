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

//global
int h;

// func
int del(VVI &table) {
    int score = 0;
    for (int i = 0; i < h; i++) {
        for (int start = 0; start < 3; start++) {
            int diff = 0;
            for (int end = start; end < 4; end++) {
                if (table[i][start] != table[i][end + 1]) {
                    break;
                } 
                diff++;
            }
            if (diff >= 2) {
                score += (diff + 1) * table[i][start];
                for (int j = 0; j <= diff; j++) {
                    table[i][start + j] = 0;
                }
            }
            start += diff;
        }
    }
    return score;
}

void drop(VVI &table) {
    VVI new_table(h, VI(5, 0));
    for (int j = 0; j < 5; j++) {
        int index = h - 1;
        for (int i = h - 1; i >= 0; i--) {
            if (table[i][j] != 0) {
                new_table[index][j] = table[i][j];
                index--;
            }
        }
    }
    table = new_table;
    return;
}

int main(void) {
    while(true) {
        cin >> h;
        if (h == 0) {
            break;
        }
        VVI table(h, VI(5));
        for (int i = 0; i < h; i++) {
            for (int j = 0; j < 5; j++) {
                cin >> table[i][j];
            }
        }
        int score = 0;
        while(true) {
            //delete and score
            int new_score = del(table);
            if (new_score == 0) {
                break;
            } else {
                score += new_score;
            }
            //drop
            drop(table);
        }
        cout << score << endl;
    }
    return 0;
}