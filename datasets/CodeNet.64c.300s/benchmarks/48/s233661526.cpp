/*************************************************************************
	> File Name: aoj0009.cpp
	> Author: BMan
	> Mail: luo-kai-jia@163.com
	> Created Time: Wed 24 Oct 2018 08:50:17 PM CST
 ************************************************************************/

#include <stdio.h>
#include <algorithm>
#include <cstring>
#include <limits.h>
#include <queue>
#include <math.h>
#include <iostream>

#define FOR(i, x, y) for (int i = x; i <= y; i++)
#define REPEAT(_N) for (int _i = 0; _i < _N; _i++)

using namespace std;

inline bool Read(int &a) { return scanf("%d", &a) != EOF; }

const int maxn = 1 << 20;
int p[maxn];
int Process() {
    p[0] = p[1] = 0;
    for (int i = 2; i < maxn; i++) p[i] = 1;
    for (int i = 2; i < maxn; i++) {
        if (!p[i]) continue;
        for (int j = i + i; j < maxn; j += i) {
            p[j] = 0;
        }
    }
    for (int i = 2; i < maxn; i++) {
        p[i] += p[i - 1];
    }
    int n;
    while (Read(n)) {
        printf("%d\n", p[n]);
    }
    return 0;
}

int main() {
    std::ios::sync_with_stdio(false);
    return Process();
}
