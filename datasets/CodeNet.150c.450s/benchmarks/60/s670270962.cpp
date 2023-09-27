#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> l[101];
    int matrix[100][100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int u,k;
        cin>>u>>k;
        for(int j=0;j<k;j++)
        {
            int tmp;
            cin>>tmp;
            l[u].push_back(tmp);
        }
    }
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            matrix[i][j]=0;
        }
    }
    
    for(int i=1;i<n+1;i++)
    {
        for(int j=0;j<l[i].size();j++)
        {
            matrix[i-1][l[i][j]-1]=1;
        }
    }
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(j!=0)
                cout<<" ";
            cout<<matrix[i][j];
        }
        cout<<endl;
    }
}