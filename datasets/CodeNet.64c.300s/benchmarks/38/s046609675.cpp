#include <iostream>
#include <cstring>

using namespace std;

int a[15],l[15],r[15];
int flag;

void dfs(int i,int j,int k)
{
    if(i>10)
    flag=1;
    if(flag)
    return;
    else
    {
        if(a[i]>l[j-1])
        {
            l[j]=a[i];
            dfs(i+1,j+1,k);
        }
        if(a[i]>r[k-1])
        {
            r[k]=a[i];
            dfs(i+1,j,k+1);
        }
    }

}

int main()
{
    int N;
    cin>>N;
    while(N--)
    {
        memset(a,0,sizeof(0));
        for(int i=1;i<=10;i++)
        cin>>a[i];
        flag=0;
        dfs(1,1,1);
        if(flag)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}