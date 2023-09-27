#include <iostream>
#include <limits>
using namespace std;


int main() {
    int n, r, maxp = numeric_limits<int>::min(), minr;

    cin >> n;
    cin >> r;
    minr = r;
    while (--n) {
        cin >> r;
        if (r - minr > maxp) {
            maxp = r - minr;
        }
        if (r < minr) {
            minr = r;
        }
    }
    cout << maxp << endl;

    return 0;
}