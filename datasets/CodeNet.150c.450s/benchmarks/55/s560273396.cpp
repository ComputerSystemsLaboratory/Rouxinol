#include <stdio.h>
int main(){
  int i;
  while(1){
    char str[1000];
    int s=0;
    scanf("%s\n",str);
    if(str[0]=='0') break;
    for(i=0;str[i]!='\0';i++){
      s+=str[i]-'0';
    }
    printf("%d\n",s);
  }
  return 0;
}
