#include<bits/stdc++.h>
using namespace std;
int main()
{
   // freopen("inputfile.txt","r",stdin);
    int t;cin>>t;
   int a=0,b=0,c=0,d=0;
    while(t--)
    {
        string s;cin>>s;
        if(s=="AC")a++;
        else if(s=="WA")b++;
        else if(s=="TLE")c++;
        else d++;
    }
    printf("AC x %d\n",a);
    printf("WA x %d\n",b);
    printf("TLE x %d\n",c);
    printf("RE x %d\n",d);
    return 0;
}
