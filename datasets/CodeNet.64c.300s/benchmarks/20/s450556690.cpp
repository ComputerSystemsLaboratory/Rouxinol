#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int w;
    while(scanf("%d",&w)!=EOF)
    {

        int i;
        long long area = 0;
        for(i=w;i<600;i+=w)
        {
            area += w*i*i;
        }
        printf("%lld\n",area);
    }

}