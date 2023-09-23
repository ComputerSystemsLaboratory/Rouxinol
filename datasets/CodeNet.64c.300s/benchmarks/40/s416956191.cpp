#include<stdio.h>
#include<cctype>

using namespace std;
int main(){
    char str[1200];
    scanf("%[^\n]%*c", str);
    for(int i = 0;i < 1200;i++){
        if(islower(str[i])){
            str[i] = toupper(str[i]);
        } else if(isupper(str[i])){
            str[i] = tolower(str[i]);
        } 
    }
    
    printf("%s\n",str);
}

