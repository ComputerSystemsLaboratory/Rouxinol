#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <ctype.h>
#include <algorithm>
#include <cmath>
#include <vector>

#define REP(i, n) for(int i=0;i<(int)(n);i++)
#define ALL(x) (x).begin(),(x).end()
#define square(x) (x) * (x)

const int INF = 1e9;

using namespace std;

int main() {
    int n;
    cin >> n;
    bool card[4][13] = {false};
    string mark[4] = {"S", "H", "C", "D"};
    REP(i, n) {
        int suit;
        int num;
        string m;
        cin >> m >> num;
        if (m == "S")
            suit = 0;
        if (m == "H")
            suit = 1;
        if (m == "C")
            suit = 2;
        if (m == "D")
            suit = 3;
        card[suit][num-1] = true;
    }
    REP(i, 4)
        REP(j, 13)
            if (card[i][j] == false)
                cout << mark[i] << " " << j+1 << endl;
    return 0;
}