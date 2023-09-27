#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    char s[800];
    int a[200];
    int i=0,p=-1;
    cin.getline(s,800);
    while(s[i]!='\0')
    {
        if(s[i]==' ')
        {
            ++i;
        }
        else if(s[i]=='+')
        {
            a[p-1] += a[p];
            --p;
            ++i;
        }
        else if(s[i]=='-')
        {
            a[p-1] -= a[p];
            --p;
            ++i;
        }
        else if(s[i]=='*')
        {
            a[p-1] *= a[p];
            --p;
            ++i;
        }
        else
        {
            a[p+1] = atoi(&s[i]);
            ++p;
            while(s[i]<='9'&&s[i]>='0')
                ++i;
        }
    }
    cout<<a[0]<<endl;
    return 0;
}