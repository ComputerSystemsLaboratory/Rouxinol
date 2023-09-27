#include <bits/stdc++.h>

using namespace std;
int main()
{
    long long a,b,sum,fun,cnt;
    while(cin>>a>>b)
    {
        cnt=0;
        sum=a+b;
        for(;;)
        {
            fun=sum;
            sum=fun/10;
            cnt++;
            if(sum<=0) break;
        }
        cout<<cnt<<endl;
    }
    return 0;
}