#include <stdio.h>

int main(){
    char c;
    char s[21]={'\0'};
    int i = 0,j;
    c = getchar();
    while(c != '\n'){
        for(j=i;j>=0;j--){
            s[j+1] = s[j];
        }
        i++;
        s[0] = c;
        c = getchar();
    }
    printf("%s\n",s);
}