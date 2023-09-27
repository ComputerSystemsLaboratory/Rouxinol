#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,cnt=0;
    cin>>a>>b>>c;
    for(a;a<=b;a++)
        if(c%a==0)
            cnt++;
    printf("%d\n",cnt);
    return 0;
}
