#include <iostream>
#include <vector>
#define INFTY 10000000
using namespace std;
int n,G[100][100];
int d[100],flag[100];
vector<int>path;
void dijkstra(){
    path.push_back(0);
    //int distance=0;
    int mini,min;
    while(path.size()<n){
        min=INFTY;
        int index=path.size()-1;
        //distance+=path[path.size()-1];
        for(int i=1;i<n;i++)
        {
            int temp=d[path[index]]+G[path[index]][i];
            if(d[i]>temp)
                d[i]=temp;
        }
        for(int i=1;i<n;i++)
        {
            if(flag[i])continue;
            if(d[i]<min)
            {
                min=d[i];
                mini=i;
            }
        }
        path.push_back(mini);
        flag[mini]=1;
        //distance+=path[path.size()-1];
    }
}
int main()
{
    int u,k,v,c;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        d[i]=INFTY;
        flag[i]=0;
        for(int j=0;j<n;j++)
            G[i][j]=INFTY;
    }
    for(int i=0;i<n;i++)
    {
        cin>>u>>k;
        for(int j=0;j<k;j++)
        {
            cin>>v>>c;
            G[u][v]=c;
        }
    }
    d[0]=0;
    dijkstra();
    for(int i=0;i<n;i++)
        cout<<i<<' '<<d[i]<<endl;
    return 0; 
}
