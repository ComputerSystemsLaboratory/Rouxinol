#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    while (1)
    {
        int x, y, s, maxv=0;
        cin>>x>>y>>s;
        if (x==0 && y==0 && s==0) break;
        for (int i=1; i<s; i++)
        {
            for (int j=1; j<s; j++)
            {
                if (i*(100+x)/100+j*(100+x)/100==s)
                {
                    maxv=max(maxv, i*(100+y)/100+j*(100+y)/100);
                }
            }
        }
        cout<<maxv<<'\n';
    }
    return 0;
}

