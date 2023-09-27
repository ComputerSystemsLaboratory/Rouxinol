#include <stdio.h>
#include <string.h>

int main(void)
{
    int sum,len;
    char x[1000];

    while(1){
        scanf("%s",x);
        if(x[0]=='0'){
            break;
        }
        len = strlen(x);
        sum=0;
        for(int n=0;n<len;n++){
            sum+=(x[n]-'0');
        }
        printf("%d\n",sum);
    }
  return 0;
}