#include<iostream>
#include<cmath>
#include<string>
#include<cctype>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
        char c;
        for(;;){
                scanf("%c",&c);
                if(c=='\n') break;
                //if(c==' ') printf(" ");
                if(islower(c)){
                        c=toupper(c);
                        printf("%c",c);
                }else{
                        c=tolower(c);
                        printf("%c",c);
                }
        }
        printf("\n");
        return 0;
}