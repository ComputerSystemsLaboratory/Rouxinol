#include<iostream>

using namespace std;

int A[100];
int B[100];

int main() {
    while (1) {
        int n, m;
        cin >> n >> m;
        if (n * m == 0) break;
        int sumA = 0;
        for (int i = 0; i < n; ++i) {
            cin >> A[i];
            sumA += A[i];
        }

        int sumB = 0;
        for (int i = 0; i < m; ++i) {
            cin >> B[i];
            sumB += B[i];
        }

        int delta = sumA - sumB;
        //cout << "sum A " << sumA << endl;
        //cout << "sum B " << sumB << endl;
        //cout << delta;

        int mini, minj, minsum = 1000;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if ((A[i] - B[j]) * 2 == delta) {
                    if (A[i] + B[j] < minsum) {
                        minsum = A[i] + B[j];
                        mini = A[i];
                        minj = B[j];
                    }
                }
            }
        }

        if (minsum == 1000) {
            cout << -1 << endl;
            continue;
        }
        cout << mini << " " << minj << endl;
    }
}