#include <stdio.h>
#include <string.h>
int main(){
char str[20];
char c;
int i = 0;
memset(str, '\n', 20);
while((c = getchar()) != '\n'){
str[i++] = c;
}
while(i--){
printf("%c", str[i]);
}
printf("\n");
return 0;
}