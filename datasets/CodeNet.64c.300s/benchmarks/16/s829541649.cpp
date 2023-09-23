#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int i, n, tmp;
    long long mi = pow(10, 10), maxdiff = -1 * pow(10, 10);

    cin >> n;
    for (i=0; i<n; i++) {
        cin >> tmp;
        if (maxdiff < tmp - mi) {
            maxdiff = tmp - mi;
        }
        if (tmp < mi) {
            mi = tmp;
        }
    }
    cout << maxdiff << endl;
    return 0;
}