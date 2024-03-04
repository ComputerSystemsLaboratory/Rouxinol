#include<stdio.h>
#include<math.h>
int main(void)
{
    int a,b;
    int c;
    while(scanf("%d %d",&a,&b) != EOF){
        c = a + b;
        c = log10(c);
        printf("%d\n",c+1);
    }
    return 0;
}