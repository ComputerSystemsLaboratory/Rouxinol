#include<iostream>
#include<stdio.h>
#include<cctype>
#include<cstdio>
using namespace std;
int main(){
    char ch;

    while(1){
        scanf("%c", &ch);
        
        if ( ch == '\n' ) break;
        
        if(isalpha(ch)){
            if(islower(ch)){
                printf("%c", toupper(ch));
            }
            
            else if(isupper(ch)){
                printf("%c", tolower(ch));
            }
        }
        
        else{
            cout << ch;
        }
    }
    cout << endl;
}
