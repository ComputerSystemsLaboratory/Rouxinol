#include <iostream>
#include <cstdio>
#include <vector>
#include <iomanip>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <map>
#include <set>
#include <cmath>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector <int> ans(N+1);

    for (int a = 1; a <= 100; ++a) {
        int a2 = a*a;

        if (a2 > N) {
            continue;
        }

        for (int b = 1; b <= 100; ++b) {
            int b2a = a2 + b*b;
            if (b2a > N) {
                continue;
            }

            for (int c = 1; c <= 100; ++c) {
                int sum = b2a + c*c + a*b + a*c + b*c;

                if (sum <= N) {
                    ++ans[sum];
                }
            }
        }
    }

    for (int i = 1; i <= N; ++i) {
        cout << ans[i] << endl;
    }

    return 0;
}