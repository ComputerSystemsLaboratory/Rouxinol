#include<bits/stdc++.h>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    int n, m;
    cin>>n>>m;
    int matA[n][m], b[m], c[n];



    for (int i = 0; i < n; i++)
    {
        c[i]=0;
        for (int j = 0; j < m; j++)
        {
            cin>>matA[i][j];
        }
    }
    for (int j = 0; j < m; j++)
    {
        cin>>b[j];
    }

   // cout<<endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            c[i] += matA[i][j]*b[j];
        }
        cout<<c[i]<<endl;
    }
    
    
    return 0;
}
