#include <iostream>
#include <cstring>
using namespace std;
char a[1000000][13];
void init()
{
    for(int i=0;i<1000000;i++)
        a[i][0] = '\0';
}
int getkey(char s[])
{
    int i = 0,key = 0,mul = 1,j;
    for(i=0;s[i]!='\0';i++)
    {
        switch(s[i]){
            case 'A':j = 1;break;
            case 'G':j = 2;break;
            case 'C':j = 3;break;
            case 'T':j = 4;
        }
        key += mul*j;
        mul *= 5;
    }
    return key;
}
int h1(int key)
{
    return key%1000000;
}
int h2(int i)
{
    return i;
}
bool insert(char s[])
{
    int key = getkey(s);
    int i,index;
    for(i=0;i<1000000;i++)
    {
        index = (h1(key)+h2(i))%1000000;
        if(a[index][0]=='\0')
        {
            strcpy(a[index],s);
            return true;
        }
        else if(strcmp(a[index],s)==0)
            return true;
        else
            continue;
    }
    return false;

}
bool find(char s[])
{
    int key,i,index;
    key = getkey(s);
    for(i=0;i<1000000;i++)
    {
        index = (h1(key)+h2(i))%1000000;
        if(a[index][0]=='\0')
            return false;
        else if(strcmp(a[index],s)==0)
            return true;
        else
            continue;
    }
    return false;
}
int main()
{
    int n;
    char s1[7],s2[13];
    cin>>n;
    init();
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