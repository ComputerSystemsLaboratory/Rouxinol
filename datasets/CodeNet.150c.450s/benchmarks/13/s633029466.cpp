#include <stdio.h>
#include<string.h>
int main(void){
char a[101],b[101];
scanf("%s%s",a,b);
int t=0;
for(int i=0;i<strlen(a);i++){
    int x=1;
    for(int j=0;j<strlen(b);j++){
        if(a[(i+j)%strlen(a)]!=b[j])
        x=0;
    }
    if(x)
    t=1;
}
printf(t?"Yes\n":"No\n");

    return 0;
}