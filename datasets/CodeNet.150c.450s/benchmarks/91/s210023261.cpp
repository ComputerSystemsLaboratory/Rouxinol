#include <iostream>
#include <cmath>

using namespace std;

int main()
{
        int n;

        while (cin >> n) {
                bool *isPrime = new bool[n + 1];
                isPrime[0] = false;
                isPrime[1] = false;
                for (int i = 2; i < n + 1; i++) {
                        isPrime[i] = true;
                }
                for (int i = 2; i <= (int)sqrt(n); i++) {
                        if (isPrime[i]) {
                                for (int j = 2; j <= n / i; j++) {
                                                isPrime[i * j] = false;
                                }
                        }
                }
                int ans = 0;
                for (int i = 2; i <= n; i++) {
                        if (isPrime[i]) {
                                ans++;
                        }
                }
                cout << ans << endl;
                delete [] isPrime;
        }

        return 0;
}