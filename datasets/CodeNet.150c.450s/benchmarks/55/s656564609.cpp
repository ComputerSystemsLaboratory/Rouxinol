#include<iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
using namespace std;

int main(){
    char a[1002];
    int b;
    int c=0;
    int len;
    int i;
    
    for (;;){
        fgets(a,1002,stdin);
        if ((int)(a[0]-'0')==0)break;
        len = strlen(a);
        
        for (i=0;i<len-1;i++){
            b=(int)(a[i]-'0');
            c = c + b;
        }
       cout << c << endl;
       c=0;
    }
    
    return 0;
}