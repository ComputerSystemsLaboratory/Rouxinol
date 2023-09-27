#include <iostream>
#include <string>

using namespace std;

int main()
{
    while (1)
    {
        int n, ans=0;
        string s[110];
        cin>>n;
        if (n==0) break;
        for (int i=0; i<n; i++) cin>>s[i];
        for (int i=0; i<n; i+=2)
        {
            if ((s[i]=="lu" && s[i+1]=="ru") || (s[i]=="ru" && s[i+1]=="lu") || (s[i]=="ld" && s[i+1]=="rd") || (s[i]=="rd" && s[i+1]=="ld")) ans++;
        }
        cout<<ans<<'\n';
    }
    return 0;
}

