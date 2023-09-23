#include<iostream>
#include<string.h>

using namespace std;

int main()
{

    char ch[2048];

    cin.getline(ch,2048,'\n');


    int len=strlen(ch);

    for(int i=0;i<len;i++)
    {
        if(ch[i]>='a'&&ch[i]<='z')
        {
            ch[i]+='A'-'a';
        }else if(ch[i]<='Z'&&ch[i]>='A')
        {
            ch[i]+='a'-'A';
        }
    }

    cout<<ch<<endl;

    return 0;
}

