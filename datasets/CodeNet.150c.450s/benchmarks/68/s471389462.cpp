#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int s[1010];
    cin >>n;
    for(int i = 0;i<n;i++)
        cin >>s[i];
    while(n >=2 &&n <= 1000)
    {
        sort(&s[0],&s[n]);
        int c;
        c = s[1]-s[0];
        if(c<0)
        {
            c= 0-c;
        }
        for(int i = 1;i<n-1;i++)
        {
            int t = s[i+1]-s[i];
            if(t<0)
        {
            t=0-t;
        }
            if(t <c)
                c = t;
        }
        cout <<c<<endl;

        cin >>n;

    for(int i = 0;i<n;i++)
        cin >>s[i];
    }
    return 0;
}

