#include <algorithm>
#include <iostream>
#include <limits>
#include <math.h>
#include <tuple>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "string.h"
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <set>

using namespace std;

using intll_t = long long;

int main() {
    int N;
    scanf("%d", &N);
    vector<int> AIS;
    AIS.reserve(N);
    for (int i = 0; i < N; i++) {
        int AI;
        scanf("%d", &AI);
        AIS.push_back(AI);
    }
    vector<int> c(10001, 0);
    for (int number : AIS) {
        c[number]++;
    }
    for (int i = 1; i < c.size(); i++) {
        c[i] += c[i-1];
    }
    vector<int> out(N, 0);
    for (int j = N - 1; j >= 0; j--) {
        int number = AIS[j];
        int& cntAtMostNumber = c[number];
        out[cntAtMostNumber - 1] = number;
        cntAtMostNumber--;
    }
    auto outIt = out.begin();
    while (true) {
        printf("%d", *outIt);
        ++outIt;
        if (outIt == out.end()) {
            break;
        } else {
            printf(" ");
        }
    }
    printf("\n");
    return 0;
}
