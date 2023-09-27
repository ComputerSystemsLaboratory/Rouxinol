#include <iostream>
#include <vector>
#include <stack>
using namespace std;
static const int MAX=101;
bool Visited[MAX]; //??\?????????????¢??????????
vector<int> Adjacency[MAX];
int dTime[MAX]; int fTime[MAX]; //?¢??????°??¶??´????¢?????????¶??´
void dfs(int j,int& clock)
{

    stack<int> S;
    S.push(j);dTime[j]=++clock;
    Visited[j]=true;
    while(!S.empty())
    {
        int p=S.top(); //???????????¶??????
        if(Adjacency[p].size()==0)
        {
            S.pop();
            fTime[p]=++clock;
            continue;
        }
        int i=0;
        if(Adjacency[p].size())
          while(Visited[Adjacency[p][i]]==true)
          {
            i++;
            if(i==Adjacency[p].size()) //???????°??????????????±?????????????
            {
                S.pop();
                fTime[p]=++clock;
                break;
            }
          }
        if(i==Adjacency[p].size()) continue;
        //if founded
        S.push(Adjacency[p][i]); dTime[Adjacency[p][i]]=++clock;
        Visited[Adjacency[p][i]]=true;
    }
}
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++) Visited[i]=false;

    for(int i=1;i<=n;i++)
    {
        int p;cin>>p;
        int num;
        cin>>num;

        for(int j=0;j<num;j++)
        {
            int t;
            cin>>t;
            Adjacency[p].push_back(t);
        }
    }
    int clock=0;
    for(int i=1;i<=n;i++)  //???????????????????????°DFS?£?????????????
    {
        if(Visited[i]==false) dfs(i,clock);
    }
    for(int i=1;i<=n;i++)
        cout<<i<<' '<<dTime[i]<<' '<<fTime[i]<<endl;
}