#include <cstdio>
#include <iostream>
#include <cmath>
#include <ctype.h>
#include <string>
#include <sstream>
#include <algorithm>
#include <cstdlib>
#include <map>
#include <queue>
#include <utility>
#include <vector>
#include <set>

using namespace std;

int main() {
    int before_rate, after_rate, before_sum;
    while (cin >> before_rate >> after_rate >> before_sum) {
        if (before_rate == 0 && after_rate == 0 && before_sum == 0) break;

        int max_sum = 0;
        for (int i = 1; i <= before_sum; i++) {
            for (int j = 1; j <= before_sum; j++) {
                if ((i * (100 +  before_rate) / 100) + (j * (100 + before_rate) / 100) == before_sum) {
                    int after_sum = (i * (100 +  after_rate) / 100) + (j * (100 + after_rate) / 100);
                    max_sum = max(after_sum, max_sum);
                }
            }
        }

        cout << max_sum << endl;
    }

    return 0;
}