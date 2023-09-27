#include <iostream>
#include <array>

using namespace std;

int main() {
    int32_t n, b, f, r, v;
    const int32_t ROOMS = 10, FLOORS = 3, BLDGS = 4;
    array<array<array<int32_t, ROOMS>, FLOORS>, BLDGS> population = {{{0}}};

    cin >> n;

    for (int32_t i = 0; i < n; i++) {
        cin >> b >> f >> r >> v;
        population[b - 1][f - 1][r - 1] += v;
    }

    for (b = 0; b < BLDGS; b++) {
        for (f = 0; f < FLOORS; f++) {
            for (r = 0; r < ROOMS; r++) {
                cout << " " << population[b][f][r];
            }

            cout << endl;
        }

        if (b != BLDGS - 1) {
            cout << "####################" << endl;
        }
    }

    return 0;
}