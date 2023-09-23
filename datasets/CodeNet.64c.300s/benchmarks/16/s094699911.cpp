#include <iostream>
#include <string>
#include <cassert>
#include <cctype>
#include <cstdio>

using namespace std;

int main(void) {

    int N;
    cin >> N;

    int diff = -1e9, begin;
    cin >> begin;
    for (int i = 0, r; i < N - 1; ++i) {
        cin >> r;
        if (r - begin > diff)
            diff = r - begin;
        if (r < begin)
            begin = r;
    }

    printf("%d\n", diff);

    return 0;
}