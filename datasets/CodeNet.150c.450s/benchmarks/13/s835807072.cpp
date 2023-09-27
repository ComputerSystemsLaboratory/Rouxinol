#include<cstdio>
#include<cstring>
using namespace std;

int main(){
    char s1[1000],s2[1000],s3[1000];
    
    scanf("%s %s", s1, s2);
    
    strcpy(s3,s1);
    
    if(strstr(strcat(s1,s3),s2)==NULL) printf("No\n");
    else printf("Yes\n");
    
    return 0;
    
}
