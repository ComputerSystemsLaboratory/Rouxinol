/* ALDS1_4_A: Linear Search */

#include <iostream>
#include <cstdio>

int main() {
    int n;
    std::cin >> n;
    int S[n + 1];
    for (int i = 0; i < n; i++)
        scanf("%d", &S[i]);

    int q;
    std::cin >> q;
    int T[q];
    for (int i = 0; i < q; i++)
        scanf("%d", &T[i]);

    int n_matches = 0;
    for (int i_q = 0; i_q < q; i_q++) {
        int i_n = 0;
        S[n] = T[i_q];
        while ( S[i_n] != T[i_q] )
            i_n++;
        if (i_n < n)
            n_matches++;
    }

    std::cout << n_matches << std::endl;
    return 0;
}