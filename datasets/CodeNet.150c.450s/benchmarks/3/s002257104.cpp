#include <bits/stdc++.h>

using namespace std;
int main()
{
    string word, s;
    cin>>word;
    int n;
    int a, b;
    cin>>n;
    for(int i=0; i<n; ++i)
    {
        cin>>s;
        if(s=="print")
        {
            cin>>a>>b;
            for(int e=a; e<=b; ++e)
                cout<<word[e];
            cout<<"\n";
        }
        else if(s=="replace")
        {
            cin>>a>>b>>s;
            int counter=0;
            for(int e=a; e<=b; ++e)
            {
                word[e]=s[counter];
                counter++;
            }
        }
        else
        {
            cin>>a>>b;
            while(a<b)
            {
                int temp=word[a];
                word[a]=word[b];
                word[b]=temp;
                a++;
                b--;
            }
        }
    }
    return 0;
}

