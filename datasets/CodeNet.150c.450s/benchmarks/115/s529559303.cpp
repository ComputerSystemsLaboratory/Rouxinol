#include<stdio.h>
#include<string>
#include<iostream>
#include<algorithm>
using namespace std;
string a;
string b;
int ans[1000+1][1000+1];
int lcs()
{
    int al=a.size();
    int bl=b.size();
    int maxn=-1;
    a=" "+a;
    b=" "+b;
    for (int i=1;i<=al;i++)
    {
        for (int j=1;j<=bl;j++)
        {
            if(a[i]==b[j])
            {
                ans[i][j]=ans[i-1][j-1]+1;
            }
            else {
                ans[i][j]=max(ans[i-1][j],ans[i][j-1]);
            }
            if(ans[i][j]>maxn)
                maxn=ans[i][j];
        }
    }
   return maxn;
}
int main()
{
    int q;
    scanf("%d",&q);
    for(int i=1;i<=q;i++)
    {
        cin>>a;
        cin>>b;
        int sum=lcs();
        cout<<sum<<endl;
    }
    return 0;
}