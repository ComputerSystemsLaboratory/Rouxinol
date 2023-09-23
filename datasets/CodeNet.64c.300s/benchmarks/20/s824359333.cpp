#include <stdio.h>
#include <string>
#include <iostream>
#include <math.h>
#include <stack>

using namespace std;

int main(){

    int x=0;
    int d;
    while(scanf("%d",&d)!=EOF){
        int s=0;
        while(x<600){
            s+=x*x*d;
            x+=d;
        }
        printf("%d\n",s);
        x=0;
    }
    
}