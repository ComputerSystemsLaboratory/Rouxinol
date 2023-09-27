#include<iostream>
using namespace std;

int main() {
        int n[100], x[100], result[100], i, j, k, l, m;
        for (i = 0; i < 100; i++) {
                result[i] = 0;
                cin >> n[i] >> x[i];
                if (n[i] == 0 && x[i] == 0) break;
        }
        for (m = 0; m < i; m++) {
                for (j = 1; j < n[m] + 1; j++) {
                        for (k = 1; k < n[m] + 1; k++) {
                                for (l = 1; l < n[m] + 1; l++) {
                                        if (j != k && k != l && j != l) {
                                                if (j + k + l == x[m]) {
                                                        result[m]++;
                                                }
                                        }
                                }
                        }
                }
        }
        for (m = 0; m < i; m++) {
                cout << result[m] / 6 << endl;
        }
        return 0;
}