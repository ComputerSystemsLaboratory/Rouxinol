#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int array[n];
    for(int i = 0;i < n;i++)    scanf("%d",&array[i]);
    for(int i = n;i > 0;i--){
        if(i != 1){
            printf("%d ",array[i-1]);
        } else{
            printf("%d\n",array[i-1]);
        }
    }
}

