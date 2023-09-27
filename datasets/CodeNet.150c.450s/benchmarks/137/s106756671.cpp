#include <iostream>
#include <cstdio>
#include <cstring>
 
#define MAXN 1000005
using namespace std;
char H[MAXN][14];
int getchar(char a)
{
    if(a=='A')return 1;
    else if(a=='C')return 2;
    else if(a=='G')return 3;
    else if(a=='T')return 4;
    else return 0;
}
 
long long getkey(char str[])
{
    long long ans=0,p=1,i;
    for(i=0;i<strlen(str);i++)
    {
        ans+=p*(getchar(str[i]));
        p*=5;
    }
    return ans;
}
 
int h1(int key){return key%MAXN;}
int h2(int key){return 1+(key%(MAXN-1));}
 
int find(char str[])
{
    long long key,i,h;
    key=getkey(str);
    for(i=0;;i++)
    {
        h=(h1(key)+i*h2(key))%MAXN;
        if(strcmp(H[h],str)==0)return 1;
        else if(strlen(H[h])==0)return 0;
    }
    return 0;
}
 
void insert(char str[])
{
    long long key,i,h;
    key=getkey(str);
    for(i=0;;i++)
    {
        h=(h1(key)+i*h2(key))%MAXN;
        if(strcmp(H[h],str)==0)return;
        else if(strlen(H[h])==0){
            strcpy(H[h],str);
            return;
        }
    }
}
 
int main()
{
    int i,n;
    char a[14],b[14];
    for(i=0;i<MAXN;i++)
        H[i][0]='\0';
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s%s",a,b);
        if(a[0]=='i')
            insert(b);
        else
        {
            if(find(b))
                printf("yes\n");
            else
                printf("no\n");
        }
    }
    return 0;
 } 
