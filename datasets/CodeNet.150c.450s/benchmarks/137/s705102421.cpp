#include <iostream>
#include <cstring>
#define M 1000000
using namespace std;
char list[M][13];
void Init()
{
    for(int i=0;i<M;i++)
        list[i][0] = '\0';
}
int getch(char a)
{
    if(a=='A')
        return 1;
    else if(a=='C')
        return 2;
    else if(a=='G')
        return 3;
    else
        return 4;
}
long long getkey(char a[])
{
    long long sum=0,p=1;
    for(int i=0;a[i]!='\0';i++)
    {
        sum += getch(a[i])*p;
        p *= 5;
    }
    return sum;
}
int h1(long long key)
{
    return key%M;
}
int h2(long long key)
{
    return 1+key%(M-1);
}
int h(long long key,int i)
{
    return (h1(key)+i*h2(key))%M;
}
bool insert(char a[])
{
    long long key = getkey(a);
    int i,index;
    for(i=0;i<M;i++)
    {
        index = h(key,i);
        if(list[index][0]=='\0')
        {
            strcpy(list[index],a);
            return 1;
        }
        else if(strcmp(list[index],a)==0)
            return 1;
        else
            continue;
    }
    return 0;
}
bool find(char a[])
{
    long long key = getkey(a);
    int i,index;
    for(i=0;i<M;i++)
    {
        index = h(key,i);
        if(list[index][0]=='\0')
            return 0;
        else if(strcmp(list[index],a)==0)
            return 1;
        else
            continue;
    }
    return 0;
}
int main()
{
    int n;
    char s1[7],s2[13];
    Init();
    cin>>n;
    while(n--)
    {
        cin>>s1>>s2;
        if(s1[0]=='i')
        {
            insert(s2);
        }
        else
        {
            if(find(s2))
                cout<<"yes"<<endl;
            else
                cout<<"no"<<endl;
        }
    }
    return 0;
}