#include <iostream>
using namespace std;

int main(void) {
    int n = 0, i, a[100], b[101] = {};
    while(cin >> i)
        a[n++] = i;
    for (int i= 0; i < n; ++i)
        ++b[a[i]];
    int max = 0;
    for (int i = 1; i <= 100; ++i)
        if (b[i] > max)
            max = b[i];

    for (int i = 1; i <= 100; ++i)
        if (max == b[i])
            cout << i << endl;

    return 0;
}

