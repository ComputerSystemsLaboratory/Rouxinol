#include <stdio.h>
 
int keta(int num)
{
        int acc = 0;
        while(num > 0) {
                num /= 10;
                acc++;
        }
        return acc;
}
 
int main()
{
        int a,b;
        while(scanf("%d %d",&a,&b) != EOF) {
                printf("%d\n",keta(a+b));
        }
        return 0;
}