#include<iostream>
#include<cstdio>
using namespace std;


int a[4];
int b[4];

int main()
{
    int n,m;
    while(~scanf("%d%d%d%d",&a[0],&a[1],&a[2],&a[3]))
    {
        scanf("%d%d%d%d",&b[0],&b[1],&b[2],&b[3]);
        int i;
        n=m=0;
        for(i=0;i<4;i++)
        {
            for(int j=0;j<4;j++)
            {
                if(a[i] == b[j] && i==j)
                {
                    n++;
                }
                if(a[i] == b[j] && i!=j)
                {
                    m++;
                }
            }
        }
        cout<<n<<" "<<m<<endl;
    }
    return 0;
}