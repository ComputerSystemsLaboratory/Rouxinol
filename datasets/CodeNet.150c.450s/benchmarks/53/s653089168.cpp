#include<bits/c++io.h>
#include<math.h>

using namespace std;

int main()
{
    int i,j,m;
    long long int n;
    int temp;
    scanf("%lld",&n);
    printf("%d: ",n);
    for(i=2;i<=sqrt(n);i++)
        {
            if(n%i==0)
            {
                printf("%d ",i);
                n=n/i;
                temp=i;
                i=1;
            }

        }
        printf("%lld\n",n);



    return 0;
}


