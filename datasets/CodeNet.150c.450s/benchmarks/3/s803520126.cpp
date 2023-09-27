#include<iostream>
#include<vector>
#include<string.h>


using namespace std;

int main()
{
    char s[1001];
    char s1[1001];

    char op[10];

    cin>>s;

    int n;

    cin>>n;

    int a,b;
    while(n--)
    {
        cin>>op>>a>>b;

        if(op[0]=='p')
        {
            for(int i=a;i<=b;i++)
            {
                cout<<s[i];
            }
            cout<<endl;
        }else if(strcmp(op,"reverse")==0)
        {
            for(int i=a;i<=(a+b)/2;i++)
            {
                char ch;
                ch=s[i];
                s[i]=s[b-(i-a)];
                s[b-(i-a)]=ch;
            }
        }else
        {
            cin>>s1;
            for(int i=0;i<strlen(s1);i++)
            {
                s[a+i]=s1[i];
            }
        }
    }


    return 0;
}

