#include<stdio.h>
int main(void)
{
    int mansions[4][3][10];
    int m,w,h,d;
    int n;
     
    int i,j,k;
     
    for(m = 0;m < 4;m++){
        for(h = 0;h < 3;h++){
            for(w = 0;w < 10;w++){
                mansions[m][h][w] = 0;
            }
        }
    }
     
    scanf("%d",&n);
     
    for(i = 0;i < n;i++){
        scanf("%d %d %d %d",&m,&h,&w,&d);
        if(0<m&&m<5&&0<h&&h<4&&0<w&&w<11)
            mansions[m-1][h-1][w-1] += d;
    }
     
    for(m = 0;m < 4;m++){
        for(h = 0;h < 3;h++){
            for(w = 0;w < 10;w++){
                printf(" %d",mansions[m][h][w]);
            }
            printf("\n");
        }
        if(m != 3)printf("####################\n");     
    }
    return 0;
}