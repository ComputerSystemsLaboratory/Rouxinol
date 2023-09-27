#include <iostream>

using namespace std;

int main()
{
    int n, ans, sum;
    while (1)
    {
        cin>>n;
        if (n==0) break;
        ans=0; sum=0;
        for (int i=1; ; i++)
        {
            sum+=i;
            if (sum>=n) break;
            if ((n-sum)%(i+1)==0)  ans++;
        }
        cout<<ans<<'\n';
    }
    return 0;
}

