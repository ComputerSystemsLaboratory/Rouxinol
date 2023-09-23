#include <iostream>
#include <cmath>
#include <math.h>
using namespace::std;

int mod(long long int m, long long int n, long long int b)
{
        long long int y,x,r;
        y=1;
        if(n>1)
        {
                if(n%2==0)
                {
                        x=(m*m)%b;
                        n=n/2;
                        r=mod(x,n,b);
                }
                else
                {
                        x=(m*m)%b;
                        y=y*(m%b);
                        n=(n-1)/2;
                        r=mod(x,n,b);

                }
        }
        else
        {
                r=m;
        }
        return (r*y)%b;

}
int main()
{
        long long int m,n,g;
        long long int b;
        b=1000000007;
        cin>>m>>n;
        g=mod(m,n,b);
        cout<<g<<endl;
}

