#include<iostream>
using namespace std;
int a[10],bo;
void dfs(int x,int l,int r)
{
    if(x==10)
        return ;
    if(bo)
        return ;
    if(a[x]>l)
        dfs(x+1,a[x],r);
    else if(a[x]>r)
        dfs(x+1,l,a[x]);
    else
    {
        bo=1;
        return ;
    }
}
    int main()
    {

        int n,i;
        cin>>n;
        while(n--)
        {
            bo=0;
            for(i=0;i<10;i++)
            {
                cin>>a[i];
            }
            dfs(0,0,0);
            if(bo)
                cout<<"NO"<<endl;
            else
                cout<<"YES"<<endl;
        }
        return 0;
    }