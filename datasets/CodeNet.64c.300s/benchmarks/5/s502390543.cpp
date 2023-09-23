#include <stdio.h>

int main(void){
    int data[10],bf;
    for(int i=0;i<10;i++){
        scanf("%d",&data[i]);
    }
    for(int i=10-1;i>0;i--){
        for(int j=0;j<i;j++){
            if(data[j]<data[j+1]){
                bf=data[j];
                data[j]=data[j+1];
                data[j+1]=bf;
            }
        }
    }
    for(int i=0;i<3;i++){
        printf("%d\n",data[i]);
    }
    return 0;
}