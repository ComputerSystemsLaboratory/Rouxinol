#include <iostream>
#include <cstdlib>
#include <cstdio>
using namespace std;
int main()
{
    int a[200];
    int p = -1;
    char s[7];
    while(scanf("%s",s)!=EOF)
    {
        if(s[0]=='+')
        {
            a[p-1] += a[p];
            --p;
        }
        else if(s[0]=='-')
        {
            a[p-1] -= a[p];
            --p;
        }
        else if(s[0]=='*')
        {
            a[p-1] *= a[p];
            --p;
        }
        else
        {
            a[p+1] = atoi(s);
            ++p;
        }
    }
    cout<<a[0]<<endl;
    return 0;
}