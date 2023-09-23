#include<bits/stdc++.h>
using namespace std;
int main(void){
    char a,b;
    while(1){
        scanf("%c",&a);
        if(islower(a)){
            b=toupper(a);
            cout<<b;
        }else{
            b=tolower(a);
            cout<<b;
        }
        if(a =='\n') break;
    }
}

