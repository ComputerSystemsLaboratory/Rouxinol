// @author: arch_

#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int x, n; cin >> n;
    string s, mark = "SHCD";
    bool cards[4][13] = {{false}};
    for (int i = 0; i < n; i++) {
        cin >> s >> x;
        cards[mark.find(s)][x - 1] = true;
    }
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 13; j++)
            if (!cards[i][j])
                cout << mark[i] << " " << j + 1 << "\n";
    return 0;
}