#include <iostream>
#include <cmath>

using namespace std;
static const int MAX = 10000;

int isPrime (int x);

int main() {
        int i, n, A[MAX], c = 0;

        cin >> n;
        for (i = 0; i < n; i++)
                cin >> A[i];

        for (i = 0; i < n; i++) {
                c += isPrime(A[i]);
        }

        cout << c << endl;

        return 0;
}

int isPrime (int x) {
        int r, i;

        if (x < 2)
                return 0;

        if (x == 2)
                return 1;

        if (x % 2 == 0)
                return 0;

        r = sqrt(x);
        for (i = 3; i <= r; i = i + 2) {
                if (x % i == 0)
                        return 0;
        }

        return 1;
}