#include<stdio.h>

int main(void)
{
    int n, b, f, r, v;
    int count[4][3][10]={}; 
    int h, i, j, k;
    
    scanf("%d", &n);
    for(h=0; h<n; h++)
    {
        scanf("%d %d %d %d", &b, &f, &r, &v);

        count[b-1][f-1][r-1] += v;
    }

    for(i=0; i<4; i++)
    {
        if(i>0) 
        printf("####################\n");
            
        for(j=0; j<3; j++)
        {
            for(k=0; k<10; k++)
            {
                printf(" %d", count[i][j][k]);
            }
            printf("\n");
        }

    }
    
    
    return 0;
}
