#include <iostream>
#include <string>

using namespace std;

int main() {
    string cards;
    int32_t m, h;

    while (cin >> cards, cards != "-") {
        cin >> m;

        for (int32_t i = 0; i < m; i++) {
            cin >> h;
            cards = cards.substr(h, cards.length()) + cards.substr(0, h);
        }

        cout << cards << endl;
    }

    return 0;
}