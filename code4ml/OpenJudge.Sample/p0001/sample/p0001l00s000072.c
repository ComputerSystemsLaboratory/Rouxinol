#include<stdio.h>
int main()
{
    int a, b, sum, flag;

    while(scanf("%d %d", &a, &b) != EOF){
        flag=0;
        sum=a+b;
        while(sum!=0){
            if(sum>0){
                sum=sum/10;
            }
            flag++;
        }
        printf("%d\n", flag);
    }

    return 0;
}

