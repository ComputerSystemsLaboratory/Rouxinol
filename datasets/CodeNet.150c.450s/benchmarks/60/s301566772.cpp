#include <iostream>
#include <cstring>
using namespace std;

struct edge{
    int node;
    edge *next;
}nodes[105];

int n,matrix[105][105];

int main()
{
    memset(matrix,0,sizeof(matrix));
    cin>>n;
    int i,j;
    for(i=1;i<=n;i++){
        int ii,n_i;
        cin>>ii>>n_i;
        for(j=0;j<n_i;j++){
            int jj;
            cin>>jj;
            matrix[ii][jj]=1;
        }
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(j!=1)cout<<" ";
            cout<<matrix[i][j];
        }
        cout<<endl;
    }
    return 0;
}