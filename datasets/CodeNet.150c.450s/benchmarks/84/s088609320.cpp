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

intll_t mergeCounting(vector<int>& inOutList) {
    if (inOutList.size() == 0) {
        throw exception();
    }
    if (inOutList.size() == 1) {
        return 0;
    }
    int formerLen = floor(inOutList.size() / 2);
    vector<int> former, latter;
    former.reserve(formerLen);
    latter.reserve(inOutList.size() - formerLen);
    copy(inOutList.begin(), inOutList.begin() + formerLen, back_inserter(former));
    copy(inOutList.begin() + formerLen, inOutList.end(), back_inserter(latter));
    intll_t transCnt = 0;
    transCnt += mergeCounting(former);
    transCnt += mergeCounting(latter);
    auto formerIt = former.begin();
    auto latterIt = latter.begin();
    auto outIt = inOutList.begin();
    while (outIt != inOutList.end()) {
        int formerVal = (formerIt == former.end()) ? numeric_limits<int>::max() : *formerIt;
        int latterVal = (latterIt == latter.end()) ? numeric_limits<int>::max() : *latterIt;
        if (formerVal < latterVal) {
            *outIt = formerVal;
            ++formerIt;
        } else {
            *outIt = latterVal;
            ++latterIt;
            transCnt += distance(formerIt, former.end());
        }
        ++outIt;
    }
    return transCnt;
}

int main() {
    int n;
    scanf("%d", &n);
    vector<int> ais;
    ais.reserve(n);
    for (int i = 0; i < n; i++) {
        int number;
        scanf("%d", &number);
        ais.push_back(number);
    }
    intll_t cnt = mergeCounting(ais);
    printf("%lld", cnt);
    printf("\n");
    return 0;
}
