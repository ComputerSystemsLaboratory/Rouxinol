#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main(void) {

    int N, M, P;
    while (cin >> N >> M >> P, N || M || P) {
        vector<int> X(N);
        double sum = 0;
        for (int i = 0; i < N; i++) {
            cin >> X[i];
            sum += X[i]*100;
        }

        sum -= sum*(P/100.0);

        if (X[M-1] != 0) {
            cout << floor(sum/X[M-1]) << endl;
        } else {
            cout << 0 << endl;
        }
    }

    return 0;
}