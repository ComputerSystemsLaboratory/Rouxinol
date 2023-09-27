#include <iostream>
#include <vector>
#include <cstdint>

using namespace std;

int main() {
    int32_t n;
    cin >> n;

    vector<int32_t> r(n), c(n);
    for (int32_t i = 0; i < n; i++) {
        cin >> r[i] >> c[i];
    }

    vector<int32_t> table(n*n);
    for (int32_t i = 0; i < n; i++) {
        table[i*n+i] = 0;
    }
    for (int32_t i = n-1; i >= 0; i--) {
        for (int32_t j = i+1; j < n; j++) {
            table[i*n+j] = INT32_MAX;
            for (int32_t k = i; k < j; k++) {
                table[i*n+j] = min(table[i*n+j], table[i*n+k] + table[(k+1)*n+j] + r[i] * c[k] * c[j]);
            }
        }
    }

    cout << table[n-1] << endl;

    return 0;
}