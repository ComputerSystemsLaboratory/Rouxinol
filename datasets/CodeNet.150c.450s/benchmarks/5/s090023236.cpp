#include <iostream>
#include <utility>
#include <cstdio>

using namespace std;

int main(void) {

    int N;
    cin >> N;

    int *a = new int[N];
    for (int i = N-1; i >= 0; --i) {
        cin >> a[i];
    }

    if (N != 0) {
        for (int i = 0; i < N - 1; ++i) {
            printf("%d ", a[i]);
        }
        printf("%d\n", a[N-1]);
    }

    delete[] a;
    return 0;
}