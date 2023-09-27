#include<stdio.h>
#include<string.h>
#define M 1000453
#define L 20
char H[M][L];
int getchar2(char fu)
{
    if(fu=='A')
        return 1;
    if(fu=='C')
        return 2;
    if(fu=='G')
        return 3;
    if(fu=='T')
        return 4;
}

int getchar(char zhi[])
{
 long long n,sum=0,p=1;
 n=strlen(zhi);
 for (int i=0;i<n;i++)
        {
            sum+=p*(getchar2(zhi[i]));
            p*=6;
        }
    return sum;
}

int myfind(char zhi[])
{
    long long key,h;
    key=getchar(zhi);
    for (long long  i=0;;i++)
    {
     h=(key%M+i*(1+(key%(M-1))))%M;
     if(strcmp(H[h],zhi)==0) return 1;
     else if(strlen(H[h])==0) return 0;
    }
    return 0;
}

int myinsert(char zhi[])
{
    long long key,h;
    key=getchar(zhi);
    for(long long i=0;;i++)
    {
        h=(key%M+i*(1+(key%(M-1))))%M;
        if(strcmp(H[h],zhi)==0) return 1;
        else if(strlen(H[h])==0)
        {
            strcpy(H[h],zhi);
            return 0;
        }
    }
    return 0;
}

int main()
{
    int n;
    char ml[20],zhi[20];
    for (int i=0;i<M;i++)
        H[i][0]='\0';
    scanf("%d",&n);
    for (int i=0;i<n;i++)
    {
        scanf("%s %s",ml,zhi);
    if(ml[0]=='i')
        myinsert(zhi);
    else {
        if (myfind(zhi)==1)
            printf("yes\n");
            else printf("no\n");
         }
    }
    return 0;
}