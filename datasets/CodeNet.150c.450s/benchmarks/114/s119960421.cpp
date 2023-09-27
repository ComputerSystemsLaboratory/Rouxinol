#include <iostream>

using namespace std;
int M[100][100]; 
int n; 
static const int WHITE=0; 
static const int GRAY=1; 
static const int BLACK=2; 
static const int INFTY=(1<<21);  
int prim()
{
    int color[100]; 
    int d[100]; 
    int parent[100];
    for(int i=0;i<n;i++)
       {
          d[i]=INFTY; 
          color[i]=WHITE;
       }
    d[0]=0; 
    parent[0]=-1;
    while(1)
    {
        int r=-1;int minv=INFTY;
        for(int i=0;i<n;i++)
        {
            if(color[i]!=BLACK&&d[i]<minv)
            {
                r=i;minv=d[i];
            }
        }
        if(r==-1) break; 
        color[r]=BLACK; 
        for(int i=0;i<n;i++)
        {
            if(color[i]!=BLACK&&M[r][i]!=INFTY) 
            {
                if(d[i]>M[r][i]) 
                {
                    d[i]=M[r][i];
                    parent[i]=r; 
                    color[i]=GRAY;
                }
            }
        }
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        if(parent[i]!=-1)
            sum+=M[i][parent[i]];
    }
    return sum;
}
int main()
{
    while(cin>>n)
    {
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
              {
                   cin>>M[i][j];
                   if(M[i][j]==-1) M[i][j]=INFTY;
              }
        cout<<prim()<<endl;
    }
    return 0;
}