#include <bits/stdc++.h>

using namespace std;
int sieve[1000005]= {0}, n, i, j, cnt=0;;
int main()
{
    while(cin>>n)
    {
        cnt=0;
        for(i=2; i<=n+2; i++)
        {
            if(!sieve[i])
            {
                for(j=2*i; j<=n+1; j+=i)
                {
                    sieve[j]=1;
                }
            }
        }

        for(i=2; i<=n; i++)
        {
            if(!sieve[i])
            {
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}

