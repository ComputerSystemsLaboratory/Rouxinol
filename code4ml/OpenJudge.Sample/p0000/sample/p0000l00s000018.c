#include<stdio.h>

void swap(int *x,int *y){
        int temp;

        temp=*x;
        *x=*y;
        *y=temp;

}

int main(void){
        int i,j,k;
        int height[10];

        i=0;

        while(scanf("%d",&height[i])==1){
                i++;
                if(i==10) break;
        }


        for(j=0;j<10;j++){
                if(height[j]<0 || height[j]>10000){
                        height[j]=0;
                }
        }



        for(i=0;i<10;i++){
                for(j=0;j<10;j++){
                        if(height[i]<height[j]){
                        swap(&height[i],&height[j]);
                        }
                }
        }       /*sort*/

        printf("\n");

        k=9;


        while(1){
                printf("%d\n",height[k]);
                k--;
                if(k==6) break;
        }




        return 0;
}