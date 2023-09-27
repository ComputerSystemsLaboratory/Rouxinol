#include<iostream>
#include<cctype>
#include<cstdio>
using namespace std;
int main(){
    char ch;
    while(1){
        scanf("%c",&ch);
        if(islower(ch) != 0){
            ch =toupper(ch);
        }
        else if(isupper(ch)!=0){
            ch=tolower(ch);
        }
        printf("%c",ch);
        if(ch=='\n'){
            break;
        }
    }
    return 0;
}
