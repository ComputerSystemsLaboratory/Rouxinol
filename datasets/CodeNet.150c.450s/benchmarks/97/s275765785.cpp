#include <iostream>
#include <vector>
#include <complex>

using namespace std;

typedef complex<int> C;

int main() {
    C dr[] = {C(-1, 0), C(0, -1), C(1, 0), C(0, 1)};
    int N;
    int n[200], d[200];
    while (true) {
        C arrangement[200];
        cin >> N;
        if (N == 0) {
            break;
        }
        n[0] = -1;
        d[0] = -1;
        for (int i=1; i<N; i++) {
            cin >> n[i] >> d[i];
        }
        int x_max = 0;
        int x_min = 0;
        int y_max = 0;
        int y_min = 0;
        arrangement[0] = C(0, 0);
        for (int i=0; i<N; i++) {
            for (int j=0; j<N; j++) {
                if (n[j] < 0) {
                    continue;
                }
                if (n[j] == i) {
                    arrangement[j] = arrangement[i]+dr[d[j]];
                    if (arrangement[j].real() > x_max) {
                        x_max = arrangement[j].real();
                    }
                    else if (arrangement[j].real() < x_min) {
                        x_min = arrangement[j].real();
                    }
                    if (arrangement[j].imag() > y_max) {
                        y_max = arrangement[j].imag();
                    }
                    else if (arrangement[j].imag() < y_min) {
                        y_min = arrangement[j].imag();
                    }
                    n[j] = -1;
                }
            }
        }
        cout << x_max-x_min+1 << ' ' << y_max-y_min+1 << endl;
    }
    return 0;
}