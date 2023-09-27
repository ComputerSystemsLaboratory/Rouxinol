#include <cstdio>

int main () {
    int n, card;
    char type;
    int trump[4][14];
    int given_type;
    scanf("%d", &n);
    for (int i = 0; i < 4; i++) {
        for (int j = 1; j < 14; j++) {
            trump[i][j-1] = j;
        }
    }
    for (int i=0; i < n; i++) {
        scanf(" %c %d", &type, &card);
        if ( type == 'S') {
            given_type = 0;
        } else if ( type == 'H' ) {
            given_type = 1;
        } else if ( type == 'C' ) {
            given_type = 2;
        } else if ( type == 'D' ) {
            given_type = 3;
        }
        trump[given_type][card - 1] = 0;
    }
    for (int i = 0; i < 4; i++) {
        for (int j = 1; j < 14; j++) {
            int check = trump[i][j-1];
            if (0 < check) {
                if ( i == 0) {
                    printf("%c %d\n", 'S', check);
                } else if ( i == 1 ) {
                    printf("%c %d\n", 'H', check);
                } else if ( i == 2 ) {
                    printf("%c %d\n", 'C', check);
                } else if ( i == 3 ) {
                    printf("%c %d\n", 'D', check);
                }
            }
        }
    }
    return 0;
}