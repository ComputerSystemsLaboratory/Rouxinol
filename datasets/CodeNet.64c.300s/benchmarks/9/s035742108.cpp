#include <iostream>
#include <cmath>
using namespace std;

int main(void) {
    int n; cin >> n;
    double r = 1.05, q = 100000;
    for(int i = 0; i < n; i++) {
        q *= r;
        q = ceil(q / 1000) * 1000;
    }

    cout << (int)q << endl;
}