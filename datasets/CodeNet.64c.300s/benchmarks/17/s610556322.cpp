#include <bits/stdc++.h>

int x, y, s;

inline int intax(int p, int x) {
    return (double)(p*(100+x))/100;
}

int main() {
    while(std::cin >> x >> y >> s) {
        if(x == 0 && y == 0 && s == 0) break;

        int a, b;
        int max = 0;
        for(a = 1; a < s; ++a) {
            for(b = 1; b < s; ++b) {
                if( (intax(a, x) + intax(b, x)) == s) {
                    max = std::max(max, intax(a, y) + intax(b, y));
                }
            }
        }
        std::cout << max << std::endl;
    }
}
