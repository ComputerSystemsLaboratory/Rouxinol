#include <stdio.h>
int main(){
char c;
while(scanf("%c",&c)!=EOF){
if(c-'a'>=0&&c-'a'<26)c-=32;
else if(c-'A'>=0&&c-'A'<26)c+=32;
printf("%c",c);
}
}