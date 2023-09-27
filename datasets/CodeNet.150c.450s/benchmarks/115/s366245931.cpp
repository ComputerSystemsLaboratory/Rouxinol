#include <cstdio>
#include <cmath>
#define MAX 1002
using namespace std;

int Lcc(const char *X, const char *Y) {
    int lcc = 0;
    int dp[MAX][MAX];
    for (int i=0; i<MAX; i++)
        for (int j=0; j<MAX; j++) dp[i][j] = 0;

    int x=1, y=1;
    for (int i=0;;i++) {
        if (X[i] == ',') {x = i;break;}
        for (int j=0;;j++) {
            if (Y[j] == ',') {
                y = j;
                break;
            }
            if (Y[j] == ',') {
                y = j;
                break;
            } else {
                if (X[i] == Y[j]) {
                    dp[i+1][j+1] = fmax(dp[i][j] + 1, dp[i+1][j]);
                } else {
                    dp[i+1][j+1] = fmax(dp[i+1][j], dp[i][j+1]);
                }
            }
        }
    }
    return dp[x-1][y-1];
}

int
main()
{
    int q;
    scanf("%d", &q);
    for (int i=0; i<(q); i++) {
        char X[MAX], Y[MAX];
        for (int i=0; i<MAX; i++) {
            X[i] = ','; Y[i] = ',';
        }
        scanf(" %s", X);scanf(" %s", Y);
        int LCC = Lcc(X, Y);
        printf("%d\n", LCC);
    }
    return 0;
}