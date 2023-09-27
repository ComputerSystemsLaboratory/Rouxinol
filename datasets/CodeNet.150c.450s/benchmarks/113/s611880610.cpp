#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int t=0;
    int x;
    while(cin>>x&&x){
        printf("Case %d: %d\n",++t,x);
    }
    return 0;
}