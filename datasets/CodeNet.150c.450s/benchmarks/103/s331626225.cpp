#include <iostream>
using namespace std;
int sp(int num,int s,int n)
{
    if(!num&!s)return 1;
    if(n>9)return 0;
    return sp(num-1,s-n,n+1)+sp(num,s,n+1);
}
int main()
{
    while(1)
    {
        int n,s;
        cin>>n>>s;if(!n)return 0;
        cout<<sp(n,s,0)<<endl;
    }
    return 0;
}