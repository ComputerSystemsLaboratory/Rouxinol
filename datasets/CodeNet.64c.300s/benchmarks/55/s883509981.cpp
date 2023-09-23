#include <iostream>
#include <cstdio>
using namespace std;
int main(void)
{
    int i, x;

    for(i = 1; i <= 10000; i++){
        scanf("%d", &x);
        if(x == 0) break;
        else printf("Case %d: %d\n", i, x);
    }

    return 0;
}
