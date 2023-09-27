// include
// ----------------------------------------------------------------------------
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>

// repetition
// ----------------------------------------------------------------------------
#define FOR(i, a, b) for (i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

// memory clear
// ----------------------------------------------------------------------------
#define CLRNUM(a) memset((a), 0, sizeof(a))
#define CLRBOOL(a, flag) memset((a), flag, sizeof(a))
#define CLRCHAR(a) memset((a), '\0', sizeof(a))

// debug
// ----------------------------------------------------------------------------
#define DEBUGNUM(x) printf("%d\n", x);
#define DEBUGCHAR(x) printf("%c\n", x);
#define DEBUGSTR(x) printf("%s\n", x);
#define DEBUGFORNUM(i, a, b, x) FOR(i, a, b){ printf("%d ", x[i]); }
#define DEBUGFORCHAR(i, a, b, x) FOR(i, a, b){ printf("%c ", x[i]); }
#define DEBUGREPNUM(i, n, x) REP(i, n){ printf("%d ", x[i]); }
#define DEBUGREPCHAR(i, n, x) REP(i, n){ printf("%c ", x[i]); }

// other
// ----------------------------------------------------------------------------
#define PUTNL printf("\n")

// constant
// ----------------------------------------------------------------------------
#define INF 1000000000

int main(void)
{
    int i, j;
    int num;
    int side_num;
    int a, b;

    scanf("%d", &num);

    int list[num];

    scanf("%d", &side_num);

    for (i = 0,j = 1; i < num; ++i, ++j){
        list[i] = j;
    }

    for (i = 0;i < side_num; ++i){
        scanf("%d, %d", &a, &b);

        list[a - 1] ^= list[b - 1];
        list[b - 1] ^= list[a - 1];
        list[a - 1] ^= list[b - 1];
    }

    for (i = 0;i < num; ++i){
        printf("%d\n", list[i]);
    }

    return 0;
}