#include<stdio.h>
#include<cstring>
int main(){
    char ring1[101],ring2[101],ring3[201];
    scanf("%s %s",ring1,ring2);
    strcpy(ring3,ring1);
    strcat(ring3,ring1);
    if(strstr(ring3,ring2)==NULL) printf("No\n");
    else printf("Yes\n");
    return 0;
}
