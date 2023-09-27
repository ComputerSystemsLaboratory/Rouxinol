#include <bits/stdc++.h>
using namespace std;
constexpr int SQRT = 40000;
bool isprime[SQRT];
int main()
{
    int N;
    cin >> N;
    cout << N << ":";
    fill(isprime, isprime + SQRT, true);
    for (int i = 2; i < SQRT; i++) {
        if (isprime[i]) {
            while (N % i == 0) {
                cout << " " << i;
                N /= i;
            }
            for (int j = 2; i * j < SQRT; j++) {
                isprime[i * j] = false;
            }
        }
    }
    if (N > 1) {
        cout << " " << N;
    }
    cout << endl;
    return 0;
}

