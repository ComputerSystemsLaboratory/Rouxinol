#include<iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int main(){
    char a[1200];
    char b[1200];
    int len;
    int i;
    
    fgets(a,1200,stdin);
    
    len = strlen(a);
    
    for (i=0;i<len;i++){
        if (0x40 < a[i] && a[i] < 0x5b){
            b[i]=a[i] + 0x20;
        }else if(0x60 < a[i] && a[i] < 0x7b){
            b[i]=a[i] - 0x20;
        }else{
            b[i]=a[i];
        }
    }
    
    for (i=0;i<len;i++){
        cout << b[i];
    }
    
    return 0;
}