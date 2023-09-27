#include<bits/stdc++.h>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    int r, c;

    cin>>r>>c;

    int mat[r][c], rsum[c], csum[r];
    for (int i = 0; i < c+1; i++)
        rsum[i]=0;
    for (int i = 0; i < r; i++)
        csum[i]=0;
    
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            cin>>mat[i][j];
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout<<mat[i][j]<<" ";
            csum[i]+=mat[i][j];
            rsum[j]+=mat[i][j];
        }
        rsum[c]+=csum[i];
        cout<<csum[i]<<endl;

    }
    cout<<rsum[0]<<std::flush;
    for (int i = 1; i < c+1; i++)
        cout<<" "<<rsum[i];
    
    cout<<endl;
    return 0;
}
