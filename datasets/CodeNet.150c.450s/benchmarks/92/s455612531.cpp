#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string.h>
using namespace std;
int main(){
    int a, b, s, k=0, i=0;
    while(scanf("%d%d", &a, &b)!=EOF){
        s=a+b;
        k=1;
        while(i>=0){
            s=s/10;
            k++;
            if(s/10<1)  break;
        }
        printf("%d\n", k);
    }
    
    return 0;
}