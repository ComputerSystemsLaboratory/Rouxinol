#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
#define NIL (-1)
char ans[1046527][14];
int o=1046527;
int getChar(char i)
{
    switch(i)
    {
        case 'A':return 1;
        case 'C':return 2;
        case 'G':return 3;
        case 'T':return 4;
    }
    /*if(i=='A') return 1;
    else if(i=='C') return 2;
    else if(i=='G') return 3;
    else if(i=='T') return 4;
    else return 0;*/
}
long long getKey(char a[])
{
    long long sum=0,p=1;
    for(long long i=0;i<strlen(a);i++)
    {
        sum+=p*(getChar(a[i]));
        p*=5;
    }
    return sum;
}
int h1(int key) {return key%o;}
int h2(int key) {return 1+(key%(o-1));}
int find(char a[])
{
    long long key=getKey(a),h,i;
    for( i=0;;i++)
    {
        h=(h1(key)+i*h2(key))%o;
        if(strcmp(ans[h],a)==0) return 1;
        else if(strlen(ans[h])==0) return 0;
    }
    return 0;
}
int cs(char a[])
{

    long long key=getKey(a);
    for(long long i=0;;i++)
    {
        long long h=(h1(key)+i*h2(key))%o;
        if(strcmp(ans[h],a)==0) return 1;
        else if(strlen(ans[h])==0)
         {
             strcpy(ans[h],a);return 0;
         }
    }
    return 0;
}
int main()
{
    for(int i=0;i<o;i++) ans[i][0]='\0';
    int n;
    char k[14],l[9];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%s %s",l, k);
        if(l[0]=='i') cs(k);
        else
        {
            if(find(k))
            {
                printf("yes\n");
            }
            else
            {
                printf("no\n");
            }
        }
    }
    return 0;
}