#include <iostream>

using namespace std;

int main()
{
    long long n,m,l,sum;
    cin>>n>>m>>l;
    int a[n][m], b[m][l];
    for (int i=0; i<n; i++) for (int j=0; j<m; j++) cin>>a[i][j];
    for (int i=0; i<m; i++) for (int j=0; j<l; j++) cin>>b[i][j];
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<l; j++)
        {
            sum=0;
            for (int k=0; k<m; k++)
            {
                sum+=a[i][k]*b[k][j];
            }
            cout<<sum; if (j!=l-1) cout<<' ';
        }
        cout<<'\n';
    }
    return 0;
}

