#include <iostream>
#include <algorithm>
using namespace std;


bool check(long long);

int main()
{
    bool prime[1000000];
    fill(prime, prime+1000000, false);
    //create prime table
    prime[0] = prime[1] = false;
    for(long long i=2;i<=1000000;i++)
    {
        if(check(i) == true)
        {
            prime[i] = true;
        }
    }

    int a,d,n;

    cin>>a>>d>>n;
    while(a!=0 && d != 0 && n != 0)
    {
        int cnt = 0;
        long long m;
        for(m = a;cnt < n; m += d)
        {
            if(prime[m] == true)
                cnt++;
        }
        cout<<m - d<<endl;
        cin>>a>>d>>n;
    }
}

bool check(long long i)
{
    if(i%2 == 0 && i != 2) return false;
    for(long long j = 3;j*j <= i;j += 2)
        if(i%j == 0)
            return false;
    return true;
}