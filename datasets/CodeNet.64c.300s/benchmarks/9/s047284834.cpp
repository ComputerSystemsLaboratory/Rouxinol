#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{   
    int a;
    int x = 100;
    scanf("%d", &a);
    for (; a > 0; a--) {
        x = ceil((float)x * 1.05);
    }
    printf("%d\n", x * 1000);
    return 0;
}