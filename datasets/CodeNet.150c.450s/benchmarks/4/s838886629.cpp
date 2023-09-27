#include <stdio.h>

int main(void)
{
    int i,j;
    int m,f,r,sum;
    int a[100][3] ={0};

    /* 成績の読み込み */
    for(i=0;;i++){
        scanf("%d %d %d",&m,&f,&r);

        if(m == -1 && f == -1 && r == -1)
        {
            break;
        }
        else
        {
            a[i][0] = m;
            a[i][1] = f;
            a[i][2] = r;
        }
    }

    /* 結果の出力 */
    for(j=0;j<i;j++){

        m = a[j][0];
        f = a[j][1];
        r = a[j][2];
        sum = m + f;

        /* 中間試験、期末試験のいずれかを欠席 */
        if(m == -1 || f == -1){
            printf("F\n");
        }

        else if(sum >= 80){
            printf("A\n");
        }

        else if(sum >= 65){
            printf("B\n");
        }

        else if(sum >= 50){
            printf("C\n");
        }

        else if(sum >= 30){
            if(r >= 50){
                printf("C\n");
            }
            else{
                printf("D\n");
            }
        }

        else{
            printf("F\n");
        }
    }

    return 0;
}

