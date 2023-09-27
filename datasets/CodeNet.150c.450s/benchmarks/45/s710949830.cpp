#include <iostream>

using namespace std;

typedef long long ll;
#define DIV 1000000007

ll power(ll m, int n)
{
    if (n == 0) return 1;
    if (n % 2 == 1) {
        return power(m * m % DIV, n / 2) % DIV * m % DIV;
    } else {
        return power(m * m % DIV, n / 2);
    }
}

int main()
{
    int m, n;
    cin >> m >> n;
    ll surplus = power(m, n) % DIV;

    cout << surplus << endl;
    return 0;
}