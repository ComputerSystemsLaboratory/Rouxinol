#include <iostream>
#include <cmath>
#include <cctype>
#include<cstdio>
//#include <string>
using namespace std;
int main(){
    char ch;
    while(1){
        
        
        scanf("%c",&ch);
        
        if(isalpha(ch)){
            if(islower(ch)){char c=(char)toupper(ch);cout<<c;}//printf("%c",toupper(ch));
            else printf("%c",tolower(ch));
        }else printf("%c",ch);
        if(ch == '\n')break;
        
        
        
    }
    return 0;
}

