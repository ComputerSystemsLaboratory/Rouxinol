#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char *argv[])
{
    const int MAX = 1000000;
    int a, d, n, cnt;
    bool prime[MAX] = {false, false, true};
    for (int i = 3; i < MAX; ++i) {
        if (i % 2 == 0) {
            prime[i] = false;
            continue;
        }
        prime[i] = true;
        for (int j = 3; j <= sqrt(i); j += 2) {
            if (i % j == 0) {
                prime[i] = false;
                break;
            }
        }
    }
    while (cin >> a >> d >> n, n) {
        cnt = 0;
        while (1) {
            if (prime[a]) {
                cnt++;
                if (cnt == n)
                    break;
            }
            a += d;
        }
        cout << a << endl;
    }
    return 0;
}