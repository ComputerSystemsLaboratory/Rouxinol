#include <iostream>
#include<cstring>
#include<cstdio>
using namespace std;
const int M=1046527;
const int L=14;
char H[M][L];
int getChar(char str)
{
    if(str=='A')return 1;
    else if(str=='T')return 2;
    else if(str=='C')return 3;
    else if(str=='G')return 4;
    else return 0;
}
int getInt(char str[])
{
    int q;
    int sum=0;
    for(int i=0; i<strlen(str); i++)
    {
        q=getChar(str[i]);
        sum=sum*5+q;
    }
    return sum;
}
int h1(int key)
{
    return key%M;
}
int h2(int key)
{
    return 1+(key%M);
}
int h(int key,int i)
{
    return (h1(key)+i*h2(key))% M;
}
int insertKey(char str[])
{
    int key=getInt(str);
    int i=0;
    while(true)
    {
        int position=h(key,i);
        if(strcmp(H[position],str)==0)return 1;
        else if(strlen(H[position])==0)
        {
            strcpy(H[position],str);
            return 1;
        }
        i=i+1;
    }
    return 0;

}
int findKey(char str[])
{
    int key=getInt(str);
    int i=0;
    while(true)
    {
        int position=h(key,i);
        if(strcmp(H[position],str)==0)return 1;
        else if(strlen(H[position])==0)return 0;
        i=i+1;
    }
    return 0;
}
int main()
{
    int n;
    char str[L],com[9];
    scanf("%d",&n);
    for(int i=0;i<M;i++)H[i][0]='\0';
    while(n--)
    {
        scanf("%s %s",com,str);
        if(com[0]=='i')
        {
            insertKey(str);
        }
        else
        {
            if(findKey(str))
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