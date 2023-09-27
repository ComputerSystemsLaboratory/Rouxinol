#include <stdio.h>
#include <stdint.h>

#include <iostream>

using namespace std;

int main()
{
    int n;
    int64_t a[10000];

    cin >> n;

    int64_t min = 1000000 + 1, max = -1000000 - 1, sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];

        min = std::min(min, a[i]);
        max = std::max(max, a[i]);
        sum += a[i];
    }

    cout << min << ' ' << max << ' ' << sum << endl;
}