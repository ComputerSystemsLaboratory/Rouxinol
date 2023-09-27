#include<iostream>
#include<vector>
#include<string.h>

using namespace std;

int main()
{
    vector<char> s;
    char ch[201];

    int m;

    while(cin>>ch&&ch[0]!='-')
    {
        for(int i=0;i<strlen(ch);i++)
        {
            s.push_back(ch[i]);
        }
        cin>>m;
        int h;
        for(int i=0;i<m;i++)
        {
            cin>>h;
            for(int i=0;i<h;i++)
            {
                s.push_back(s[0]);
                s.erase(s.begin());
            }
        }

        for(int i=0;i<s.size();i++)
        {
            cout<<s[i];
        }
        cout<<endl;

        s.clear();
    }



    return 0;
}

