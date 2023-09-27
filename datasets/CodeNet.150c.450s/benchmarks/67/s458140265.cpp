#include <iostream>
using namespace std;

int inc(int n, int max, int cnt) {
    if (n > max) {
        return 0;
    } else if (n == max) {
        return 1;
    } else {
        return inc(n + cnt + 1, max, cnt + 1);
    }
}

int soci(int n)
{
    int res = 0;
    for (int i = 1; i < n; ++i) {
        res += inc(i, n, i);
    }
    return res;
}

int main(int argc, char *argv[])
{
    int n;
    while (cin >> n, n) {
        cout << soci(n) << endl;
    }
    return 0;
}