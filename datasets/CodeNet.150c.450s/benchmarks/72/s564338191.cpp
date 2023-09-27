#include<iostream>
#include<stdio.h>
#include<math.h>
#include<cctype>
using namespace std;

int main(){
char x;
while(1){
scanf("%c", &x);
if ( isalpha(x) ) {//アルファベット  
     if ( islower(x) ) {//小文字
          printf("%c", toupper(x));
     } else {//小文字以外
           if ( isupper(x) ) {//大文字
                printf("%c", tolower(x));
           } 
     }
} else {//アルファベット以外
       printf("%c",x);
}if(x ==  '\n' )break;
}
return 0;
}
