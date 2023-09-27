#include <iostream>
using namespace std;

int main() {
    int n, card[4][13] = {};

    cin >> n;
    for (int i = 0; i < n; i++) {
        char suit;
        int rank;
        cin >> suit >> rank;
        switch (suit) {
            case 'S':
                card[0][rank - 1] = 1;
                break;
            case 'H':
                card[1][rank - 1] = 1;
                break;
            case 'C':
                card[2][rank - 1] = 1;
                break;
            case 'D':
                card[3][rank - 1] = 1;
                break;
        }
    }

    char SHCD[] = "SHCD";
    for (int i = 0; i < 52; i++) {
        int suit = i / 13;
        if (!card[suit][i % 13]) {
            cout << SHCD[suit] << " " << i % 13 + 1 << endl;
        }
    }

    return 0;
}
