#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
int main(void){
    int lp;
    cin >> lp;
    int* ary =(int*)malloc(sizeof(int)*lp);
    for(int i=0;i<lp;i++) {
        cin >> ary[i]; 
    }
    int count =0;    
    for(int i=0;i<lp;i++) {
        for(int j=0;j<lp-i-1;j++) {
            if(ary[j] > ary[j+1]) {
                int tmp=ary[j];
                ary[j] = ary[j+1];
                ary[j+1] = tmp;
                count++;
            }
        }
    }
    for(int i=0;i<lp;i++) {
        if(i==lp-1)
            printf("%d\n",ary[i]);
        else
            printf("%d ",ary[i]);
    }
    printf("%d\n",count);
    free(ary);
    return 0;
}