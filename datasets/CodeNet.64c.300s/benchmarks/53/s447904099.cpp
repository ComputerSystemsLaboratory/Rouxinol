#include <iostream>
#include <cstdio>
using namespace std;
int main(void)
{
    int a, b, c;
    int i, count = 0;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    for(i = 1; i <= c; i++){
        if((c % i) == 0){
            if(i >= a && i <= b)
                count += 1;
        }
    }
    printf("%d\n", count);

    return 0;
}
