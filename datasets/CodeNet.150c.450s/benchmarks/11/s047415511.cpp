#include <stdio.h>

#define PRINT_MISSING_CARDS(SUIT)               \
    for (int i = 0; i < 13; i++)                \
        if (!SUIT[i])                           \
            printf(#SUIT " %d\n", i+1);

int main()
{
    bool S[13] = {}, H[13] = {}, C[13] = {}, D[13] = {};
    int n;

    scanf("%d\n", &n);

    for (int i = 0; i < n; i++) {
        char suit;
        int rank;

        scanf("%c %d\n", &suit, &rank);
        switch (suit) {
        case 'S': S[rank-1] = true; break;
        case 'H': H[rank-1] = true; break;
        case 'C': C[rank-1] = true; break;
        case 'D': D[rank-1] = true; break;
        }
    }

    PRINT_MISSING_CARDS(S);
    PRINT_MISSING_CARDS(H);
    PRINT_MISSING_CARDS(C);
    PRINT_MISSING_CARDS(D);
}