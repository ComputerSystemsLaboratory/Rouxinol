#include <iostream>
using namespace std;

int main()
{
    const int N=100;
    const int M=100;

    int n,m;
    int A[N][M] ={{}};
    int b[M]={};

    cin>>n>>m;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>A[i][j];
        }
    }

    for(int j=0;j<m;j++)
    {
        cin>>b[j];
    }

    for(int i=0;i<n;i++)
    {
        int ans=0;
        for(int j=0;j<m;j++)
        {
            ans+= A[i][j]*b[j];
        }
        cout<<ans<<"\n";
    }
    return 0;
}