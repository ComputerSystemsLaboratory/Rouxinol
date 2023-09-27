#include <stdio.h>
#include <string.h>
#include <ctype.h>
  
int main()
{
    int i;
  
    int sum = 0;
    char W[11], T[1001];
  
    scanf("%s", W);
    for( i = 0; W[i]; ++i ) W[i] = tolower(W[i]);
    while( 1 ){
        scanf("%s", T);
        if( strcmp("END_OF_TEXT", T) == 0 ) break;
        for( i = 0; T[i]; ++i ) T[i] = tolower(T[i]);
        if( strcmp(W, T) == 0 ) ++sum;
    }
  
    printf("%d\n", sum);
  
  }