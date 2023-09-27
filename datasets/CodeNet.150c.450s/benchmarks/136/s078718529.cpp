#include<bits/stdc++.h>
using namespace std;
int GCDserch(long long int a,long long int b)
{
    if(a%b==0)return b;
    return GCDserch(b,a%b);
}
int main()
{
    long long int a,b,ch,GCD,LCM;
    while(cin>>a>>b){
            if(b>a){
                ch=a;
                a=b;
                b=ch;
            }
        GCD=GCDserch(a,b);
        LCM=a*b/GCD;
        cout<<GCD<<" "<<LCM<<endl;
    }
}