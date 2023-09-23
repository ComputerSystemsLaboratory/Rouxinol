#include <stdio.h>
#define DATAS 10

int main(void){
    int height[DATAS], tmp, minID;

    // input
    for (int i=0; i<DATAS; i++){
        scanf("%d", &height[i]);
    }
    // sort
    for (int i=0; i<DATAS; i++){
        minID = i;
        for (int j=i; j<DATAS; j++){
            if (height[j]<height[minID]) minID=j;
        }
        tmp = height[i];
        height[i] = height[minID];
        height[minID] = tmp;
    }

    for (int i=0; i<3; i++){
        printf("%d\n", height[DATAS-1-i]);
    }
   return 0;
}