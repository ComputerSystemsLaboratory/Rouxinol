#include<iostream>
using namespace std;
int V[101][10001];
int v[101],w[101];
int main()
{
    int N,W;
    cin>>N>>W;
    
    for(int i=1;i<N+1;i++)
    {
        cin>>v[i]>>w[i];
    }
    
    for(int i=0;i<101;i++)
        V[i][0]=0;
    for(int i=0;i<10001;i++)
        V[0][i]=0;
    
    for(int i=1;i<N+1;i++)
    {
        for(int j=1;j<W+1;j++)
        {
            if(w[i]>j)
                V[i][j]=V[i-1][j];
            else
                V[i][j]=max(v[i]+V[i-1][j-w[i]],V[i-1][j]);
        }
    }
    cout<<V[N][W]<<endl;
}