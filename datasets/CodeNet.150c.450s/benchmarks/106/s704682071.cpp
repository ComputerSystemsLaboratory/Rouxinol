#include <stdio.h>

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    
    int num_of_divisor = 0;
    int i = 0;
    
    for(i = a; i < b+1 ; i++ )
    {
        if(c%i == 0) num_of_divisor++;
    }
    
    printf("%d\n",num_of_divisor);
    
    return 0;
}
