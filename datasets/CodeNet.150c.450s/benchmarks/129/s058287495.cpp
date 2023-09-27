#include <stdio.h>

int main(void)
{
    int r,c,table[101][101]={{0}},i,j,temp;

    scanf("%d%d",&r,&c);

    for(i=0;i<r;i++) {
        for(j=0;j<c;j++) {
            scanf("%d", &temp);
            table[i][j]=temp;
            table[i][c]+=temp;
            table[r][j]+=temp;
            table[r][c]+=temp;
        }
    }

    for(i=0;i<=r;i++) {
        for(j=0;j<c;j++) {
            printf("%d ",table[i][j]);
        }
        printf("%d\n",table[i][c]);
    }

    return 0;
}