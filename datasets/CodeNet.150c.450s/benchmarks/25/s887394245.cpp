#include<iostream>
#include<memory.h>
#include<string.h>

using namespace std;

int main()
{
    char ch[1300];
    int cnt[26];

    memset(cnt,0,sizeof(cnt));

    while(cin.getline(ch,1300,'\n'))
    {
        int len=strlen(ch);

        for(int i=0;i<len;i++)
        {
            if(ch[i]>='a'&&ch[i]<='z')
            {
                cnt[ch[i]-'a']++;
            }else if(ch[i]>='A'&&ch[i]<='Z')
            {
                cnt[ch[i]-'A']++;
            }
        }

    }



    for(int i=0;i<26;i++)
    {
        cout<<(char)('a'+i)<<" : "<<cnt[i]<<endl;
    }


    return 0;
}

