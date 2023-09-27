#include <iostream>
#include <cstdio>
using namespace std;
int main(void)
{
    int x, y;
    int i, st, large, small;

    for(i = 1; i <= 3000; i++){
        scanf("%d", &x); scanf("%d", &y);
        small = x;
            large = y;
            if(y < small){
                small = y;
                large = x;
            }
        if(x == 0 && y == 0) break;
        else printf("%d %d\n", small, large);
    }
    return 0;
}
