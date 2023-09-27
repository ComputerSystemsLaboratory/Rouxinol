#include <iostream>
using namespace std;

const char SHCD[] = "SHCD";

int main() {
    long long bitvector[4] = {1, 1, 1, 1};
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        char suit; cin >> suit;
        int  rank; cin >> rank;
        for (int j = 0; j < 4; j++) {
            if (suit == SHCD[j]) {
                bitvector[j] |= 1 << rank;
            }
        }
    }
    for (int j = 0; j < 4; j++) {
        for (int k = 1; k <= 13; k++) {
            if ((bitvector[j] >> k & 1) == 0) {
                cout << SHCD[j] << " " << k << endl;
            }
        }
    }
    return 0;
}
