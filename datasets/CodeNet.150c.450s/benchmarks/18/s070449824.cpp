#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n, m = 100;
    cin >> n;
    while (n--) {
        m = ceil(m * 1.05);
    }
    cout << m * 1000 << endl;

    return 0;
}