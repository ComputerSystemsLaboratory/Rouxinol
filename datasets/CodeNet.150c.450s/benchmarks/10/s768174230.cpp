#include <iostream>
using namespace std;

int main() {
    int house[4][3][10], n, building, floor, address, number;

    for (int h = 0; h < 4; h++) {
        for (int i = 0; i < 3; i++) {
            for (int s = 0; s < 10; s++) {
                house[h][i][s] = 0;
            }
        }
    }

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> building >> floor >> address >> number;
        house[building - 1][floor - 1][address - 1] += number;
        if (house[building - 1][floor - 1][address - 1] >= 10) {
            house[building - 1][floor - 1][address - 1] = 9;
        } else if (house[building - 1][floor - 1][address - 1] < 0) {
            house[building - 1][floor - 1][address - 1] = 0;
        }
    }

    for (int h = 0; h < 4; h++) {
        for (int i = 0; i < 3; i++) {
            for (int s = 0; s < 10; s++) {
                cout << " " << house[h][i][s];
            }
            cout << endl;
        }
        if ((h + 1) != 4) {
            cout << "####################" << endl;
        }
    }

    return 0;
}