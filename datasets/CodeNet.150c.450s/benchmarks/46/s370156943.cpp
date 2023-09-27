#include<iostream>
using namespace std;

int main()
{
    
    
    while(1)
    {int n,x=0;
        int num=0;
        cin>>n>>x;
        if(n==0&&x==0)break;
        for(int i=1;i<=n-2; i++)
        {
            for(int s=i+1; s<=n-1; s++)
            {
                for(int t=s+1; t<=n; t++)
                {
                    if(i+s+t==x)
                    {
                        num++;
                    }
                }
            }
        }
        cout<<num<<endl;
    }
    
    return 0;
}