
#include <iostream>
#include <string>
#include <locale>
#include <stdio.h>
#include <ctype.h>
#include <cstring>
#include <cctype>
using namespace std;

int main()
{   char s[20];
    cin>>s;
    int n=0;
    while(true){
        
        char p[20];

        cin>>p;
        
        
        if(strcmp(p,"END_OF_TEXT")==0){
            break;
        }else{
            for (int i=0;i<strlen(p);i++){
            p[i]=tolower(p[i]);}
           
            if(strcmp(p,s)==0){
                n+=1;
            }
        }
    }
    
    cout << n<<endl;
return 0;
}
