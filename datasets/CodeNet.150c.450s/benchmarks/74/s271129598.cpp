#include <stdio.h>
#include <stdlib.h>

#define NOFILE 1
#define NOARG 2
#define NCOINS 25
#define SMAX 50005

const int inf = (1 << 31) - 1;

int solve (int sum, int *coins, int n)
{
    int min_to_obtain [SMAX];
    int i, j;

    min_to_obtain [0] = 0; //we need 0 coins to obtain the sum 0
    ///initialising the array with an infinite value
    for (i = 1; i <= sum; ++ i)
        min_to_obtain [i] = inf;

    for (i = 0; i < n; ++ i)
    {
        for (j = 1; j <= sum; ++ j)
        {
            if (j >= coins [i])
            {
                if (min_to_obtain [j] > 1 + min_to_obtain [j - coins [i]])
                {
                    min_to_obtain [j] = 1 + min_to_obtain [j - coins [i]];
                }
            }
        }
    }

    return min_to_obtain [sum];

}

int main()
{

    int sum, n, v [NCOINS], i, min_coins = inf;

    scanf ("%d %d", &sum, &n);
    for (i = 0; i < n; ++ i)
    {
        scanf ("%d", &v [i]);
    }

    min_coins = solve (sum, v, n);

    printf ("%d\n", min_coins);


    return 0;
}