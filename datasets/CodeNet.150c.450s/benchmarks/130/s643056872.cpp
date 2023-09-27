#include <iostream>

using namespace std;

int a[100][100];
int b[100];

int
main(int argc, const char *argv[])
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i != n; ++i) {
        for (int j = 0; j != m; ++j) {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i != m; ++i) cin >> b[i];

    for (int i = 0; i != n; ++i) {
        long long p = 0;
        for (int j = 0; j != m; ++j) {
            p += a[i][j] * b[j];
        }
        cout << p << endl;
    }

    return 0;
}