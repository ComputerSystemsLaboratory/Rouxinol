#include <iostream>
#include <utility>
#include <cstdio>

using namespace std;

static int N;
static bool cards[52];

inline static int suit_to_i(char s) {
    return s == 'S' ? 0
                    : s == 'H' ? 1
                               : s == 'C' ? 2
                                          : 3;
}

inline static char i_to_suit(int i) {
    int d = i / 13;
    return d == 0 ? 'S'
                  : d == 1 ? 'H'
                           : d == 2 ? 'C'
                                    : 'D';
}

int main(void) {

    cin >> N;

    for (int i = 0; i < N; ++i) {
        char s;
        int r;
        cin >> s >> r;
        cards[13 * suit_to_i(s) + (r - 1)] = true;
    }

    for (int i = 0; i < 52; ++i) {
        if (! cards[i]) {
            printf("%c %d\n", i_to_suit(i), i % 13 + 1);
        }
    }

    return 0;
}