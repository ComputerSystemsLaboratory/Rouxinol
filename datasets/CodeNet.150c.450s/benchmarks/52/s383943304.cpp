#include<stdio.h>
int i=0,j=0;
int cars[19];

int main(){
    while(1)
    {

        if(scanf("%d",&cars[i])==-1)
        {
            break;
        }
        if(cars[i]==0){
            printf("%d\n",cars[i-1]);
            i--;
        }
        else
        {
            i++;
        }
    }
    return 0;
}