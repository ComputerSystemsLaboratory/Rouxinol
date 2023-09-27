#include<cstdio>
#include<cctype>
  
int main(){
    char c;
  
    while(1){
        scanf("%c", &c);
        if(isalpha(c)){
            if(islower(c)) printf("%c", toupper(c));
            else printf("%c", tolower(c));
        }
        else printf("%c", c);
          
        if(c == '\n')break;
    }

    return 0;
}
