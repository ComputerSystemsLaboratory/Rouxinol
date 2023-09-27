#include <stdio.h>
#include <algorithm>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int a[5];

int main() {
    rep (i, 5) scanf("%d", a+i);
    sort(a, a+5);
    reverse(a, a+5);
    rep (i, 5) printf("%d%c", a[i], "\n "[i<4]);
    return 0;
}