#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;

int main() {
    int n;
    cin >> n;
    double a[n];
    double sum = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        sum += a[i];
    }
    sort(a, a + n);
    printf("%.0f %.0f %.0f\n", a[0], a[n-1], sum);
}