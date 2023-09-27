#include<cstdio>
#include<cstring>
#include<vector>
using namespace std;
int arr[15];
int m,n;
vector<int> x;
vector<int> y;
void binary(int p)
{
    int i=0;
    int flag=1;
    while(i<10)
    {
        if(p&flag)
            x.push_back(arr[i]);
        else
            y.push_back(arr[i]);
        flag=flag<<1;
        i++;
    }
}
int panduan()
{
    for(int j=1;j<x.size();j++)
    {
        if(x[j]<x[j-1])
          return 0;
    }
    for(int i=1;i<y.size();i++)
    {
        if(y[i]<y[i-1])
          return 0;
    }
    return 1;
}
int solve()
{
    for(int i=0;i<1024;i++)
    {
        x.clear();
        y.clear();
        binary(i);
        if(panduan())
            return 1;
    }
    return 0;
}
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        for(int i=0;i<10;i++)
            scanf("%d",&arr[i]);
        if(solve())
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}