#include <bits/stdc++.h>
using namespace std;

int parent(int i) {
    return i / 2;
}

int left(int i) {
    return i * 2;
}

int right(int i) {
    return i * 2 + 1;
}

int main() {
    int h;
    cin >> h;
    vector<int> T(h + 1);
    for (int i = 1; i <= h; i++) {
        cin >> T.at(i);
    }

    for (int i = 1; i <= h; i++) {
        printf("node %d: key = %d, ", i, T.at(i));
        if (parent(i) >= 1) {
            printf("parent key = %d, ", T.at(parent(i)));
        }
        if (left(i) <= h) {
            printf("left key = %d, ", T.at(left(i)));
        }
        if (right(i) <= h) {
            printf("right key = %d, ", T.at(right(i)));
        }
        printf("\n");
    }

    return 0;
}
