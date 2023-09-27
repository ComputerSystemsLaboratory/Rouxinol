#include <bits/stdc++.h>

using namespace std;

#define REP(i, n) for(int i = 0; i < n; i++)

string shuffle(string s, int h) {
    string head = s.substr(0, h);
    string tail = s.substr(h, s.size() - h);
    return tail + head;
}

int main() {
    string cards;
    int m, h;

    while (1) {
        cin >> cards;
        if (cards == "-") break;

        cin >> m;
        REP(i, m) {
            cin >> h;
            cards = shuffle(cards, h);
        }
        cout << cards << endl;
    }
}