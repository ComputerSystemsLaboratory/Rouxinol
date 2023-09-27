#include <iostream>
#include<cstdio>
#include<cctype>
#include<string.h>
#include<stdio.h>
using namespace std;

int main()
{
    while(true){
        char b[1001]="0";
        cin.getline(b,sizeof(b));
        char c[strlen(b)];
        strcpy(c,b);
        if(c[0]!='0'){
            int x=0;
            for(int k=0;k<strlen(c);k++){
                int n;
                n=c[k]-'0';
                x+=n;
            }cout<< x<<endl;
        }else{
            break;
        }
    }

    
    return 0;
}
