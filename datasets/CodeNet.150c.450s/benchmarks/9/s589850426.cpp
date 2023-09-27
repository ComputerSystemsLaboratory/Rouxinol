#include <stdio.h>
#include <string.h>
  
int main(void)
{
    char str[400];
    int count[100];
    int n,i,j=0;
     
    while(1){
        scanf("%s",str);
        if(str[0]=='-'){
            break;
        }
        scanf("%d",&n);
        for(i=0;i<n;i++){
            scanf("%d",&count[i]);
        }
        for(i=0;i<n;i++){
            strncat(str,str,count[i]);
            int j=0;
            while(str[j] != '\0'){
                str[j] = str[j + count[i]];
                j++;
            }
        }
        printf("%s\n",str);
    }
    return 0;
}