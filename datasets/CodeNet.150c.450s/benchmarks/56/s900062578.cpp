#include <iostream>
#include <cstdio>

using namespace std;

int main(void)
{
    u_int n;
    cin >> n;

    long min = 1000001, max = -1000001, sum = 0;
    for (u_int i = 0; i < n; i++) {
        int x;
        cin >> x;
        sum += x;
        if (x < min)
            min = x;
        if (x > max)
            max = x;
    }

    printf("%ld %ld %ld\n", min, max, sum);
    return 0;
}