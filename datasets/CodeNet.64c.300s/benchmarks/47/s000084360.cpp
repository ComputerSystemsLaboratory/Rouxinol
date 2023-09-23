#include <stdio.h>

int main(){
    int list[100];
    int data;
    int i;
    int max = 0;
    for(i=0;i<100;i++){
        list[i] = 0;
    }
    while(scanf("%d",&data)!=EOF){
        list[data-1] += 1;
        if(list[data-1]>max)max = list[data-1];
    }
    for(i=0;i<100;i++){
        if(list[i]==max){
            printf("%d\n",i+1);
        }
    }
}