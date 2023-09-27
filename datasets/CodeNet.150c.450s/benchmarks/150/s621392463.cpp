#include <iostream>
#include <vector>
#include <algorithm>

using ll = long long;
using namespace std;

/* initialize */
int n;
int c[15000];
int A[2000001];
void countingsort(int A[], int k){

    for (int i = 0; i < k; ++i) {
        c[i] = 0;
    }
    for (int j = 0; j < n; ++j) {
        c[A[j]]++;
    }
}
/* main */
int main() {
    cin >> n;
    int co = 0;
    for (int i = 0; i < n; ++i) {
        scanf("%d", &A[i]);
    }
    countingsort(A, 15000);
    for (int j = 0; j < 12000; j++) {
        if (c[j]) {
            for (int i = 0; i < c[j];++i) {
                co++;
                if(co != n) printf("%d ", j);
                else {printf("%d\n", j); return 0;}
            }
        }
    }
    return 0;
}
