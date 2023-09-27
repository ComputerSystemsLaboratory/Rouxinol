#include <iostream>

using namespace std;

int main()
{
    int a[101] = {};

    int n;
    while (cin >> n) {
        a[n-1] += 1;
    }

    int ma = 0;

    for (int i = 0; i < 100; ++i) if (ma < a[i]) ma = a[i];

    for (int i = 0; i < 100; ++i) if (a[i] == ma) cout << i + 1 << endl;
}