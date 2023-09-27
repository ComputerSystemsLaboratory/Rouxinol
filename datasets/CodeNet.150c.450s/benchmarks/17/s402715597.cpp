#include<iostream>
#include<cstring>
#include<algorithm>
#include<queue>
#include<cstdio>
#include<string>
using namespace std;
int temp[5];
bool compare(int a,int b)
{
    return a>b;
}
int main()
{
  //  freopen("test.txt", "r", stdin);
  //  freopen("testout.txt", "w", stdout);
    while(~scanf("%d",&temp[0]))
    {
        for(int i=1;i<5;i++)
            cin>>temp[i];
        sort(temp,temp+5,compare);
        for(int i=0;i<4;i++)
        {
            cout<<temp[i]<<' ';
        }
        cout<<temp[4]<<endl;
    }
    return 0;
}

