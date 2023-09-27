#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int count=0,len1,len2,i,j;
    char w[11],t[1001];

    scanf("%s",w);
    len1=strlen(w);
    for(i=0;i<len1;i++){
      w[i]=toupper(w[i]);
    }

    while(1){
        scanf("%s",t);
        if(!strcmp(t,"END_OF_TEXT")){
            break;
        }

        len2=strlen(t);
        for(j=0;j<len2;j++){
           t[j]=toupper(t[j]);
        }
        
        if(!strcmp(t,w)){
            count++;
        }
    }

    printf("%d\n",count);

    return 0;
}