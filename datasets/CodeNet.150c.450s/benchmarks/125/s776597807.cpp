#include<iostream>
#include<vector>
#include<utility>
using namespace std;
vector<int> l[101];
int matrix[100][100];
pair<int,int> t[101];
bool visited[101];
int tim=0;
void dfs(int cur)
{
    tim+=1;
    t[cur].first=tim;
    //cerr<<"visiting "<<cur<<' '<<tim<<endl;
    visited[cur]=true;
    
    for(int i=0;i<l[cur].size();i++)
    {
        if((matrix[cur-1][l[cur][i]-1]==1)&&(visited[l[cur][i]]==false))
        {
            dfs(l[cur][i]);
        }
    }
    
    tim+=1;
    t[cur].second=tim;
    
    
}
int main()
{
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
    
    visited[0]=false;
    for(int i=1;i<n+1;i++)
    {
        visited[i]=false;
        for(int j=0;j<l[i].size();j++)
        {
            matrix[i-1][l[i][j]-1]=1;
        }
    }
    
    for(int i=1;i<n+1;i++)
    {
        if(visited[i]==false)
            dfs(i);
    }
    
    for(int i=1;i<n+1;i++)
    {
        cout<<i<<" "<<t[i].first<<" "<<t[i].second<<endl;
    }
}