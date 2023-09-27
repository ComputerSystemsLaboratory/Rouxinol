#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
 
int main() {
    char a[25], i;
    scanf("%s", &a);
    for(i=strlen(a)-1;i>=0;i--){
       printf("%c", a[i]);                         
                             
    }
    printf("\n");
    
    return 0;
}