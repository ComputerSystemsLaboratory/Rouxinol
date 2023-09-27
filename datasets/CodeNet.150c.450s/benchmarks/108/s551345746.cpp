//Breadth First Search
#if 0
?????¨?????????30??????
??????????????¨??????????????¢?´¢????????¬????????¨??¢?????´????????????????£?
#endif
#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int n;
int D[100];
int matrix[100][100];
void bfs(int src)
{
    //cerr<<"bfs root = "<<src<<endl;
    queue<int> q;
    q.push(src);
    D[src]=0;
    while(!q.empty())
    {
        int cur=q.front();
        q.pop();
        //cerr<<"visiting "<<cur<<' '<<D[cur]<<endl;
        for(int dst=0;dst<n;dst++)
        {
            if(matrix[cur][dst]==1&&D[dst]==-1)
            {
                D[dst]=D[cur]+1;
                q.push(dst);
            }
        }
    }
};

int main()
{
    vector<int> l[101];
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
    
    for(int i=0;i<100;i++)
    {
        D[i]=-1;
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
    
    bfs(0);
    
    for(int i=0;i<n;i++)
    {
        cout<<(i+1)<<' '<<D[i]<<endl;
    }
}