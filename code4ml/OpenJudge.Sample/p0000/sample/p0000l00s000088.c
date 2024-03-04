#include<stdio.h>

int array[10],i,first=0,second=0,third=0;

int main(void){
        for(i=0;i<10;i++){
    
        scanf("%d",&array[i]);
    
    
                if(array[i]>first){
                        third=second;
                        second=first;
                        first=array[i];
                        }   
    
                if(array[i]<first && array[i]>second){
                        third=second;
                        second=array[i];
                        }   
    
                if(array[i]<first && array[i]<second && array[i]>third){
                        third=array[i];
                        }   

                }   
    
    
        printf("%d\n%d\n%d\n",first,second,third);
    
        return 0;
}