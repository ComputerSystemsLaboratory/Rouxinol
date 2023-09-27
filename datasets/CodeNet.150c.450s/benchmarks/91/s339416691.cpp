#include <iostream>
using namespace std;

const int N = 1000000;
bool flags[N];
int  counts[N];

void make_flags_and_counts ();

void make_flags_and_counts () {
    fill(flags, flags + N, true);
    flags[0] = false;
    flags[1] = false;

    fill(counts, counts + N, 0);
    for (int i = 2; i < N; ++i) {
        if (flags[i]) {
            for (int j = 2; i*j < N; ++j) {
                flags[i*j] = false;
            }
        }
        counts[i] = flags[i] ? counts[i-1] + 1 : counts[i-1];
    }
}

int main() {
    make_flags_and_counts();

    int n;
    while (cin >> n) {
        cout << counts[n] << endl;
    }
    return 0;
}