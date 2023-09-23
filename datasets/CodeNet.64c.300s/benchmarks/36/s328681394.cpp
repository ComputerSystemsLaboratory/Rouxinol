#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[3];
    cin >> a[0];
    cin >> a[1];
    cin >> a[2];
    sort(a, a+3);
    printf("%d %d %d\n", a[0], a[1], a[2]);
}