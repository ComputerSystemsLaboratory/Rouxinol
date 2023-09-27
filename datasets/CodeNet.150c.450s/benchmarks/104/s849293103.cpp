#include <iostream>
#include <cstdio>

using namespace std;

int cell[31];

int main() {
    int w, n, a, b;

    for (int i = 1; i <= 30; i++) {
        cell[i] = i;
    }

    cin >> w >> n;

    while (n--) {
        int a, b;
        scanf("%d,%d", &a, &b);
        swap(cell[a], cell[b]);
    }

    for (int i = 1; i <= w; i++) {
        cout << cell[i] << endl;
    }

    return 0;
}