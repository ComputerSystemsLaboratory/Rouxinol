//
//  main.c
//  Dirichlet's Theorem on Arithmetic Progressions
//
//  Created by x15071xx on 2016/06/06.
//  Copyright ?? 2016??´ AIT. All rights reserved.
//
//dm+a=n
//n???d??§?????£???a?????????&&?´???°?????°
#include <stdio.h>
#include <math.h>
#define NUM 1000000

int main(int argc, const char * argv[]) {
    
    int a,d,n,i,j;
    int hurui[NUM] = {0},count_n = 0;
    
    for (i=0; i<=NUM; i++) {
        hurui[i]=1;
    }
    hurui[1]=0;
    
    for (i=2; i<= NUM; i++) {
        if (hurui[i] == 1) {
            for(j = 2 * i; j <= NUM; j += i)
                hurui[j] = 0;
            
        }
    }
    
    while (1) {
        
        scanf("%d %d %d",&a,&d,&n);
        
        if(a==0&&d==0&&n==0){
            break;
        }
        
        for (i = a; i < NUM; i+=d) {
            if (hurui[i] == 1) {
                count_n++;
                if (count_n==n) {
                    printf("%d\n",i);
                    break;
                }
            }
        }
        count_n=0;
        
    }
    return 0;
}