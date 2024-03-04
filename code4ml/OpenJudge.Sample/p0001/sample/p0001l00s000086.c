#include <stdio.h>
#include <string.h>
int main(){
    char s[1000000],c[1000000],a;
    long int i,j=0,e;
    while(scanf("%s %s",s,c) != EOF){
        i=(long)s;
        e=(long)c;
        i=i+e;
        a=(char)i;
        j=strlen(&a);
    printf("%ld\n",j);
    }
    return (0);
}