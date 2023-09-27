#include <iostream>
#include <vector>
using namespace std;

int X[100];

int main() {
    int N, M;
    double P;
    while (cin >> N >> M >> P, N) {
        P /= 100;
        int sum = 0;
        for (int i = 0; i < N; i++) {
            cin >> X[i];
            sum += 100 * X[i];
        }
        M--;
        if (X[M] == 0) {
            cout << 0 << endl;
        } else {
            cout << int(sum * (1.0 - P) / X[M] + 1e-9) << endl;
        }
    }
}