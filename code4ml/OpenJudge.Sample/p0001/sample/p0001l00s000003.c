#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, const char * argv[]){
    int num,num2,num3;
//    int i;
    int count = 1;

    while(scanf("%d %d",&num,&num2) != -1){
        num3 = num + num2;
//        printf("%d\n",num3);
//        printf("%d\n",count);
        while((num3 / 10) >= 1){
            num3 =  num3 / 10;
            count++;
//            printf("%d\n",count);
//            printf("debug\n");
        }
        printf("%d\n",count);
        count = 1;
    }
    
//    int i,j;
//    char num[256];
//    char *temp;
//    int num1,num2,num3;
//    int count = 1;
//    
//    for(i = 0; i < 200; i++){
//        gets(num);
//        temp = strtok(num," ");
//        num1 = atoi(temp);
//        
//        if(0 >= num1 || num1 >=1000000)
//            exit(0);
//        temp = strtok(NULL," ");
//        num2 = atoi(temp);
//        
//        if(0 >= num2 || num2 >=1000000)
//            exit(0);
//        num3 = num1 + num2;
//        printf("%d",num3);
////        for(j = 1; j < 7;j++){
////            if(num3 % 10 < 10)
////                break;
////            count++;
////        }
    return 0;
}