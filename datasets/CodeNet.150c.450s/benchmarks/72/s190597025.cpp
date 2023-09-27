#include <iostream>
#include <cstdio>
#include <cctype>
 
using namespace std;
 
int main(void){
    char x;
    while(1){
        x = getchar();
        if(islower(x))
            x = toupper(x);
        else if(isupper(x))
            x = tolower(x);
        cout<<x;
        if(x=='\n')
            break;
    }
 
  return 0;
}