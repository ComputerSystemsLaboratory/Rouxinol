#include <iostream>
#include <cstdio>
#include <algorithm>
#include <map>
using namespace std;
typedef long long ll;
int n;
char op[15], s[15];
map<ll,int> mp;
ll parse(char *s)
{
    ll sum=0;
    int sub=0;
    int flag=1;
    while(flag)
    {
        char c=*s++;

        switch(c)
        {
        case 'A':
        {
            sub=1;
            break;
        }
        case 'C':
        {
            sub=2;
            break;
        }
        case 'G':
        {
            sub=3;
            break;
        }
        case 'T':
        {
            sub=4;
            break;
        }
        default:
        {
            flag=0;
            break;
        }
        }
        sum=5*sum+sub;
    }
    return sum;
}
int main()
{
//    freopen("in.txt","r",stdin);
    scanf("%d",&n);
    while(n--)
    {
        getchar();
        scanf("%s%s",op,s);
        ll key=parse(s);
        switch(op[0])
        {
        case 'i':
        {
            mp[key]=1;
            break;

        }
        case 'f':
        {
            if(1==mp[key]) printf("yes\n");
            else printf("no\n");
            break;
        }
        }
    }

    return 0;
}