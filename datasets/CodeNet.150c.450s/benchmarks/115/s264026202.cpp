#include <cstdio>
#include <cstring>
#include <algorithm>
#include <iostream>
using namespace std;
const int MAXN = 1005;
char inputa[MAXN], inputb[MAXN];
int f[MAXN][MAXN];
int main(void)
{
    int t, lengtha, lengthb;
    scanf("%d", &t);

    while(t--)
    {
        scanf("%s%s", inputa, inputb);
        memset(f, 0, sizeof(f));

        lengtha = strlen(inputa);
        lengthb = strlen(inputb);

        for(int i = 0; i <= lengtha; i++)
        {
            for(int j = 0; j <= lengthb; j++)
            {
                if(i == 0 || j == 0)
                    f[i][j] = 0;
                else if(inputa[i - 1] == inputb[j - 1])
                    f[i][j] = f[i - 1][j - 1] + 1;
                else
                    f[i][j] = max(f[i - 1][j], f[i][j - 1]);
            }
        }

        printf("%d\n", f[lengtha][lengthb]);
    }

    return 0;
}

