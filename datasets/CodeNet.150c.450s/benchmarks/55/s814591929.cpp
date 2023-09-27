#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ln,s=0,i;
    char a[1009];
    while(1)
    {
        cin>>a;
        ln=strlen(a);
        if(ln==1&&a[0]=='0')
            break;
        for(i=0;i<ln;i++)
            s+= a[i]-'0';
        cout<<s<<endl;
        s=0;
    }
}

