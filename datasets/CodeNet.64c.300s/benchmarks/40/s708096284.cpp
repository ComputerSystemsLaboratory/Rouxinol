#include<iostream>
#include<cstdio>
#include<cctype>
using namespace std;
int main(){
    char a;
    int i;
   
    while(1){
        
        scanf("%c",&a);
        
        
      
         if(islower(a)){
             printf("%c", toupper(a));
        }
        else if(isupper(a)){
            printf("%c", tolower(a));
        }
        
        else  {
            printf("%c",a);
            
        }
       if(a=='\n') break;
    }
    
    return 0;
}

