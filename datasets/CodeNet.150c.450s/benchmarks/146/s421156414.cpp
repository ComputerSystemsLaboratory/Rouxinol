#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        double A[2], B[2], C[2], D[2];
        cin >> A[0] >> A[1] >> B[0] >> B[1] >> C[0] >> C[1] >> D[0] >> D[1];
        double AB[2] = {A[0] - B[0], A[1] - B[1], };
        double CD[2] = {C[0] - D[0], C[1] - D[1], };
        double outerProduct = AB[0] * CD[1] - AB[1] * CD[0];
        if (outerProduct == 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}