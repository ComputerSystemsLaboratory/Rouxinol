#include<stdio.h>
int main(){
int i;
char str[21];
for(i=0;;i++){
str[i]=getchar();
if(str[i]=='\n')
	break;
}
for(;i>0;i--){
printf("%c",str[i-1]);
}
printf("\n");
return 0;
}