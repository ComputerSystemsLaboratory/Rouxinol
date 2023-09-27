#include <stdio.h>
#include<string.h>
int main(void){
char w[11],t[1001];
scanf("%s",w);
int i,j=0;
for(i=0;w[i];i++){
    if(w[i]>'Z')
    w[i]-=32;
}
while(1){
    scanf("%s",t);
    if(strcmp(t,"END_OF_TEXT")==0)
    break;
    
    for(i=0;t[i];i++){
    if(t[i]>'Z')
    t[i]-=32;
}
    if(strcmp(w,t)==0)
    j++;
    
}
printf("%d\n",j);
    return 0;
}