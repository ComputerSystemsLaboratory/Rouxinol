#include <iostream>

using namespace std;

int cards[50];

void shuffle(int p, int c) {
    int a[p + c - 1];
    for (int i = 0; i < p + c - 1; ++i) {
        if (i < c) {
            a[i] = cards[p - 1 + i];
        } else {
            a[i] = cards[i - c];
        }
    }

    for (int i = 0; i < p + c - 1; ++i) {
        cards[i] = a[i];
    }
}

int main() {
    while (true) {
        int N, R;
        cin >> N >> R;
        if (N == 0 && R == 0) return 0;

        for (int i = 0; i < N; ++i) {
            cards[i] = N - i;
        }

        for (int i = 0; i < R; ++i) {
            int p, c;
            cin >> p >> c;
            shuffle(p, c);
        }

        cout << cards[0] << endl;
    }
}
