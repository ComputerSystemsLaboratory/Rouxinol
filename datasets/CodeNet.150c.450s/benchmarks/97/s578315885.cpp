#include <iostream>

using namespace std;

int getmax(const int arr[], const bool rev) {
    int m = 0;
    for (int i = 0; i < 201; i++) {
        if (m < arr[i] != rev) {
            m = arr[i];
        }
    }
    return m;
}

int main()
{
    int x[201];
    int y[201];
    int n;
    int dx[] = {-1, 0, 1, 0};
    int dy[] = {0, -1, 0, 1};

    while (cin >> n, n) {
        fill_n((int *)x, 201, 0);
        fill_n((int *)y, 201, 0);
        for (int i = 1; i < n; i++) {
            int n, d;
            cin >> n >> d;
            x[i] = x[n] + dx[d];
            y[i] = y[n] + dy[d];
        }
        cout << 1 + getmax(x, false) - getmax(x, true) << " " << 1 + getmax(y, false) - getmax(y, true) << endl;
    }
    return 0;
}