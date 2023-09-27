#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,box1,box2;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
        box1=a;
        box2=b;
        while(b)
        {
            int q=a%b;
            a=b;
            b=q;
        }
        printf("%d %d\n",a,box1/a*box2);
    }
    return 0;
}