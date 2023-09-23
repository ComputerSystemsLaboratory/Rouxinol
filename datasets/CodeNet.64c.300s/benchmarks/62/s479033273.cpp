#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i,j;
    int x=0;
    int y=0;
    int z1,z2;

    int n,m;
    int **a;
    int *b;

    scanf("%d %d",&n,&m);

    a =(int **)malloc(n*sizeof(int *));
    b =(int *)malloc(m*sizeof(int));

    for(i=0;i<n;i++){
        a[i] = (int *)malloc(m*sizeof(int));
    }

    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(j==0){
                scanf("%d",&x);
            }
            else{
                scanf(" %d",&x);
            }
            a[i][j] = x;
        }
    }

    for(i=0;i<m;i++){
        scanf("%d",&x);
        b[i] =x;
    }


    for(i=0;i<n;i++){
        y=0;
        for(j=0;j<m;j++){
            z1 = a[i][j];
            z2 = b[j];
            y += z1*z2;
        }

        printf("%d\n",y);
    }

    for(i=0;i<n;i++){
        free(a[i]);
    }

    free(a);
    free(b);

    return 0;
}



