#include <iostream>
#include <algorithm>

using namespace std;

int cell[5];

int main() {
    cin >> cell[0] >> cell[1] >> cell[2] >> cell[3] >> cell[4];

    sort(cell, cell + 5);

    cout << cell[4] << " " << cell[3] << " " << cell[2] << " " << cell[1] << " " << cell[0] << endl;

    return 0;
}