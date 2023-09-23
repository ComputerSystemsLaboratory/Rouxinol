#include <iostream>

using namespace std;

const int MAX_P = 1000010;
bool prime[MAX_P + 1];

void init_prime()
{
    for (int i = 0; i < MAX_P; i++)
        prime[i] = true;
    prime[0] = prime[1] = false;

    for (int i = 2; i * i < MAX_P; i++) 
        if (prime[i])
            for (int j = 2 * i; j < MAX_P; j += i)
                prime[j] = false;
}

int main()
{
    int a, d, n;

    init_prime();

    while (cin >> a >> d >> n, a || d || n) {
        int ans = 0;

        while (true) {
            if (prime[a])
                ans++;
            if (ans == n)
                break;
            a += d;
        }
        cout << a << endl;
    }

    return 0;
}