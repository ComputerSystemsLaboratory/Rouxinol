#include<cctype>
#include<cstdio>
#include<iostream>
using namespace std;
int main(){
    char n;
    
    while(1){
        scanf("%c",&n);
        
        if(n == '\n') break;   //改行のときおわり
        
        if(isalpha(n)){    //入力されたものがアルファベットのとき
            
            if(islower(n)) printf("%c",toupper(n));
            else if(isupper(n)) printf("%c",tolower(n));
            
        }else{
            printf("%c",n);
        }
    }
    printf("\n");
    
    return 0;
}
