#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, r;

    for (;;) {
        cin >> n >> r;
        if (n == 0 && r == 0) break;

        // init
        vector<int> cards(n);
        for (int i = 0; i < n; i++) cards[i] = n - i;

        // cutting operation
        for (int i = 0; i < r; i++) {
            int p, c;
            cin >> p >> c;

            vector<int> cards_(cards);
            for (int j = 0; j < c; j++) cards[j] = cards_[j + p - 1];
            for (int j = 0; j < p - 1; j++) cards[j + c] = cards_[j];

        }

        cout << cards[0] << endl;
    }
}