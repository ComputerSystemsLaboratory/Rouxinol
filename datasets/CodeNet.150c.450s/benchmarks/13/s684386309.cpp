#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main() {
    char ch;
    char ring[200],search[100],change[100];
    scanf("%s %s",ring , search);
    strcpy(change, ring);
    strcat(ring, change);
    //printf("%s",ring);
    if ( strstr(ring, search) == NULL ) printf("No\n");
    else printf("Yes\n");
    return 0;
}
    
