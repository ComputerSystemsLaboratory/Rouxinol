//
//  main.c
//  ITP1_5_D
//
//  Created by ??±??°?????? on 2015/10/11.
//  Copyright ?? 2015??´ HamadaShogo. All rights reserved.
//

#include <stdio.h>

void call(int n);

int main(int argc, const char * argv[]) {
    int num;
    
    scanf("%d", &num);
    call(num);
    
    return 0;
}

void call(int n){
    int i;
    int x;
    
    for (i=1; i<=n; i++) {
        x = i;
        if (x%3 == 0) {
            printf(" %d", i);
        }
        else{
            while (x){
                if (x%10 == 3) {
                    printf(" %d", i);
                    break;
                }
                x /= 10;
            }
        }
        
    }
    puts("");
}