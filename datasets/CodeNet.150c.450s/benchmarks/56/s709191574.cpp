#include<iostream>
#include<cstdio>
using namespace std;

int main() {
    int n;
    long long x, min = 9999999, max = -9999999, sum = 0;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        if (x < min) {
            min = x;
        }
        if (x > max) {
            max = x;
        }
        sum += x;
    }

    printf("%lld %lld %lld\n", min, max, sum);
}