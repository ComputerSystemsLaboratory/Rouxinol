#include<stdio.h>

int main(void){
    int i, j, temp, top=-1, mountain[10] = {1819, 2003, 876, 2840, 1723, 1673, 3776, 2848, 1592, 922};

    for(i=0; i<10; i++){
        for(j=i+1; j<10; j++){
            if(mountain[i] < mountain[j]){
                temp = mountain[j];
                mountain[j] = mountain[i];
                mountain[i] = temp;
            }
        }
    }

    for(i=0; i<3; i++){
        printf("%d\n", mountain[i]);
    }


    return 0;
}