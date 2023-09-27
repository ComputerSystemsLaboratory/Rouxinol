#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    int n;
    char ch[1001];

    while(cin.getline(ch,1001,'\n')&&ch[0]!='0')
    {

        int len=strlen(ch);

        n=0;
        for(int i=0;i<len;i++)
        {
            n+=ch[i]-'0';
        }
        cout<<n<<endl;
    }


    return 0;
}

