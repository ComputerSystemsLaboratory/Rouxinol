#include<cstdio>
#include<cstring>
int main(){
    char ch1[200], ch2[100], ch3[100];
    scanf("%s %s", ch1, ch2);
    
    strcpy(ch3, ch1);
    strcat(ch1, ch3);
    
    if ( strstr(ch1, ch2) == NULL ) printf("No\n");
    else printf("Yes\n");
    
    return 0;
}
