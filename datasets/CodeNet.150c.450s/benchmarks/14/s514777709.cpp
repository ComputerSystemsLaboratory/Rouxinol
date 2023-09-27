#include<stdio.h>
int main()
{
    int n,x=1,a=0;
    int i = 1;
    scanf("%d",&n);

    do{
        x = i;
        if (x % 3 == 0){
            printf(" %d",i);
            a = 1;
        }
        if (a==0){
            do{
                if (x % 10 == 3){
                	printf(" %d",i);
                    break;
                }
                x /= 10;

            } while (x);
        }
        else{
            a = 0;
        }
    } while (++i<=n);
    printf("\n");
    return 0;
}

