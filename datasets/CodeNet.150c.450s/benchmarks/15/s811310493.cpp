#include <iostream>
#include <cstdio>

using namespace std;

int main(void) {

    int n;
    cin >> n;

    int *S = new int[n];
    for (int i = 0; i < n; ++i) {
        cin >> S[i];
    }

    int q;
    cin >> q;

    int total = 0;
    for (int i = 0; i < q; ++i) {
        int x;
        cin >> x;
        for (int j = 0; j < n; ++j) {
            if (x == S[j]) {
                ++total;
                break;
            }
        }
    }

    printf("%d\n", total);

    return 0;
}