#include<stdio.h>
int main(void)
{
    int a,b; /* 数の箱*/
    char c, p; /* 文字の箱*/
    do{
        scanf("%d ",&a);
        scanf("%c",&c);/*文字は %c */
        scanf(" %d",&b);
        switch(c){ /* p128 */
        case '-':
            printf("%d\n",a-b);
            break;
        case '+':
            printf("%d\n",a+b);
            break;
        case '*':
            printf("%d\n",a*b);
            break;
        case '/':
            printf("%d\n",a/b);
            break;
        case '%':
            printf("%d\n",a%b);
            break;
        default: /*どれにも当てはまらない場合*/
            break;
        }
    }while(c!='?'); /*cが'？'になるまで繰り返す*/
    return 0;
}
