#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<functional>
#include<string>
#include<cstring>
#include<cmath>
using namespace std;
int cnt;
int n;
bool func(int num)
{
    if(num==2)return true;
    else if(num%2==0)return false;
    else if(num==1)return false;
    else
    {
        for(int i=3;i<=sqrt(num);i+=2)
        {
            if(num%i==0)return false;
        }
    }
    return true;
}
int main()
{
    int a,d,n;
    int cnt;
    while(cin>>a>>d>>n,a)
    {
        cnt=0;
        for(int i=a;i<=1000000;i+=d)
        {
            if(func(i))cnt++;
            if(cnt==n)
            {
                cout<<i<<endl;
                break;
            }
        }
    }
    return 0;
}