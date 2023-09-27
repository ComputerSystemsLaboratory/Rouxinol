#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main() {
    int32_t n;
    cin >> n;

    vector<bool> A(n*n);
    fill(A.begin(), A.end(), false);

    for (int32_t i = 0; i < n; i++) {
        int32_t u, k;
        cin >> u >> k;

        for (int32_t j = 0; j < k; j++) {
            int32_t v;
            cin >> v;

            A[(u-1)*n+(v-1)] = true;
        }
    }

    for (int32_t i = 0; i < n; i++) {
        cout << A[i*n];
        for (int32_t j = 1; j < n; j++) {
            cout << " " << A[i*n+j];
        }
        cout << endl;
    }

    return 0;
}