#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, r, p, c;
    while (true) {
        cin >> n >> r;
        if (n == 0 && r == 0) {
            break;
        }
        vector<int> deck;
        for (int i = 0; i < n; i++) {
            deck.push_back(i + 1);
            // cout << deck[i] << endl;
        }
        for (int i = 0; i < r; i++) {
            cin >> p >> c;
            stack<int> s;
            for (int j = 0; j < c; j++) {
                // cout << "要素番号" << deck.size() - p - j << endl;
                s.push(deck[deck.size() - p - j]);
                // cout << "取り除いたもの" << s.top() << endl;
            }
            // cout << s.top() << endl;
            deck.erase(deck.begin() + (deck.size() - p - c + 1), deck.begin() + (deck.size() - p + 1));

            for (int j = 0; j < c; j++) {
                deck.push_back(s.top());
                s.pop();
            }
            // for (int afa = 0; afa < deck.size(); afa++) {
            //     cout << deck[afa] << endl;
            // }
        }
        cout << deck[deck.size() - 1] << endl;
    }
}
