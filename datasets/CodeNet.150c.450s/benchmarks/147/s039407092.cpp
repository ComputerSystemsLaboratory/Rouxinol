#include <iostream>
using namespace std;
int counter(int x, int y, int z) {
    if (x == y && x == z)
        return 1;
    if (x != y && x != z && y != z)
        return 6;
    return 3;
}

int the_sol(int ind) {
    int sum = 0;
    for (int x = 1; x * x <= ind; x++) {
        for (int y = x; y * y <= ind; y++) {
            for (int z = y; z * z <= ind; z++) {
                if (x * x + y * y + z * z + x * y + x * z + y * z == ind)
                    sum += counter(x, y, z);
            }
        }
    }
    return sum;
}
int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cout << the_sol(i) << "\n";
    return 0;
}