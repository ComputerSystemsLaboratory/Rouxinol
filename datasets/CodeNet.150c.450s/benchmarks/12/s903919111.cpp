#include <iostream>
using ll = long long;
using namespace std;

/* initialize */
auto p = [](int i) -> int {return i/2;};
auto l = [](int i) -> int{return 2 *i;};
auto r = [](int i) -> int{return 2*i+1;};
/* main */
int main() {
    int H, A[100001];
    cin >> H;
    for (int j = 1; j <= H; j++) {
        scanf("%d", &A[j]);
    }
    for (int j = 1; j <= H; j++) {
        printf("node %d: key = %d, ", j, A[j]);
        if (p(j) >= 1) printf("parent key = %d, ", A[p(j)]);
        if (l(j) <= H) printf("left key = %d, ", A[l(j)]);
        if (r(j) <= H) printf("right key = %d, ", A[r(j)]);
        printf("\n");
    }
    return 0;
}
