#include<iostream>
#include<string.h>
#include<cstdio>

using namespace std;

int main()
{
    char text[1001];
    char End[100]="END_OF_TEXT";
    char sub[11];
    int cnt=0;

    cin>>sub;

    int lenth1=strlen(sub);

    for(int i=0;i<lenth1;i++)
    {
        sub[i]=tolower(sub[i]);
    }

    while(cin.getline(text,1001,'\n')&&strcmp(text,End))
    {
        int lenth2=strlen(text);

        char *s;

        s=strchr(text,' ');

        while(s!=NULL)
        {
            *s='\0';

            for(int i=0;i<strlen(text);i++)
            {
                text[i]=tolower(text[i]);
            }

            if(strcmp(sub,text)==0)
            {
                cnt++;
            }

            strcpy(text,s+1);
            s=strchr(text,' ');
        }
        for(int i=0;i<strlen(text);i++)
            {
                text[i]=tolower(text[i]);
            }

            if(strcmp(sub,text)==0)
            {
                cnt++;
            }

    }

    cout<<cnt<<endl;


    return 0;
}

