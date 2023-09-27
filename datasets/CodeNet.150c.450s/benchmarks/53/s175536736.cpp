#include <iostream>
#include <cmath>

using namespace std;

bool P[31623];

int main() {

    int n;
    cin >> n;

    fill(P, P + 31623, true);
    P[0] = P[1] = false;

    for (int i = 2; i <= sqrt(n); i++) {
        if (P[i]) {
            for (int j = i * 2; j <= sqrt(n); j += i) {
                P[j] = false;
            }
        }
    }

    cout << n << ":";

    for (int i = 2; i <= sqrt(n); i++) {
        if (P[i] && n % i == 0) {
            do {
                cout << " " << i;
                n /= i;
            } while (n % i == 0);
        }
    }

    if (n != 1) cout << " " << n;

    cout << endl;
}
