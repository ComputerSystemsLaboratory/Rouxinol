#include <iostream>
using namespace std;

int main()
{
    int n=0,x=0;

    cin>>n>>x;

    while (n != 0 || x != 0)
    {
        int count=0;
        for(int i=1;i<=n-2;i++)
        {
            for(int j=i+1;j<=n-1;j++)
            {
                for(int k=j+1;k<=n;k++)
                {
                    if(i+j+k == x)
                    {
                        count++;
                    }
                }
            }
        }
        cout<<count<<"\n";
        cin>>n>>x;
    }

    return 0;
}