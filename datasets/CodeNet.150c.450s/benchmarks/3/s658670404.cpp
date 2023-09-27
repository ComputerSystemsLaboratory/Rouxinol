#include<iostream>
#include<string>

using namespace std;

int main()
{
    string str;
    int q;
    cin>>str>>q;

    for(int i=0;i<q;i++)
    {
        string inst;
        cin>>inst;
        if(inst == "replace")
        {
            int a,b;
            string s;
            cin>>a>>b>>s;

            int count=0;
            for(int j=a;j<=b;j++)
            {
                str[j] = s[count];
                count++;
            }

        }else if(inst == "reverse")
        {
            int a,b;
            cin>>a>>b;
            string s = str;

            int count = b;
            for(int j=a;j<=b;j++)
            {
                str[j] = s[count];
                count--;
            }


        }else if(inst == "print")
        {
            int a,b;
            cin>>a>>b;

            for(int j=a;j<=b;j++)
            {
                cout<<str[j];
            }
            cout<<endl;
        }
    }

    return 0;
}