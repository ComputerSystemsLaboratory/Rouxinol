#include <iostream>
# include <stdio.h>
using namespace std;

int main(){
    int a, b, c;
    int i=0;
    cin >> a >> b >> c;
    for(a; a<=b; a++){
        if(c % a == 0){
            i++;
        }
    }
    printf("%d\n", i);
}