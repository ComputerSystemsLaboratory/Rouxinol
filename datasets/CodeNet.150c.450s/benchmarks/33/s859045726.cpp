#include <bits/stdc++.h>
using namespace std;
int main() {
    int x, y, s;
    auto tax = [](int a, int x) { return a * (100 + x) / 100;};
    while(~scanf("%d%d%d", &x, &y, &s) && x) {
        int ans = 0;
        for(int i = 1; i < s; ++i) for(int j = 1; j < s; ++j)
          if(tax(i, x) + tax(j, x) == s) ans = max(ans, tax(i, y) + tax(j, y));
        printf("%d\n", ans);
    }
}