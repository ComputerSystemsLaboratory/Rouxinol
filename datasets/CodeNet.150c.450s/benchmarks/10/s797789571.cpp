#include<iostream>
using namespace std;
int main()
{
    int i,j,k,l,b,f,r,v,n;
    int a[4][3][10]={0};
    cin>>n;
    while(n-- >0)
    {
        cin>>b>>f>>r>>v;
        for(i=0;i<4;i++)
        {
            for(j=0;j<3;j++)
            {
                for(k=0;k<10;k++)
                    if(i==(b-1)&&j==(f-1)&&k==(r-1))
                        a[i][j][k]+=v;
            }
        }
    }
    for(i=0;i<4;i++)
        {
            for(j=0;j<3;j++)
            {
                for(k=0;k<10;k++)
                {
                        cout<<" "<<a[i][j][k];
                }
                cout<<endl;
            }
                if(i<3)
                    cout<<"####################\n";
        }
        return 0;
}

