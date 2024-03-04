#include<stdio.h>

int main(){
    int i,j,k,hight[10],first=0,second=0,third=0;
    for(i=0;i<10;i++){
        scanf("%d",&hight[i]);
    }
    for(j=0;j<3;j++){
        for(i=j+1;i<10;i++){
            if(hight[j]<hight[i]){
                first=hight[j];
                hight[j]=hight[i];
                hight[i]=first;
            }
        }
    }   
    printf("%d\n%d\n%d",hight[0],hight[1],hight[2]);
}