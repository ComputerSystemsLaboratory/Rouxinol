#include <bits/stdc++.h>

using namespace std;

#define MAX 1000000
#define SQRT 1000

bool np[MAX];

int main()
{
    np[0] = np[1] = true;
    for(int p=2; p<SQRT; p++)
    {
        if(!np[p])
        {
            for(int i=2*p; i<MAX; i+=p) np[i] = true;
        }
    }

    int a, d, n;
    while(cin >> a >> d >> n, a|d|n)
    {
        for(int x=a; n;x+=d)
        {
            if(!np[x] && !--n)
            {
                cout << x << endl;
            }
        }
    }
}