#include<iostream>
using namespace std;
#include<stdio.h>
#include<cstdio>

int main(){
    
    int num = 0;
    char fig[1001];
    
    while(1){
        scanf( "%s",fig );
        if ( fig == "0" ) break;
        for ( int i = 0; fig[i] != '\0'; i++){
            num += fig[i] - '0';
        }
        if ( num == 0) break;
        printf ( "%d\n", num );
        num = 0;
    }
    return 0;
}

