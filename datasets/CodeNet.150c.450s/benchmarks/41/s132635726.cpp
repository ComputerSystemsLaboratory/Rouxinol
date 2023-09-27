#include<iostream>
#include<algorithm>
#include<queue>
#include<vector>
#include<string>
#include<cstring>
using namespace std;
const int inf=2e9+5;
const int maxn=100;
typedef vector<int> vi;
typedef long long ll;
#define fi first
#define se second
typedef pair<int,int> P;
int d[maxn+5][maxn+5];
int v,e;

void floyd()
{
  for(int k=0;k<v;k++)
  {
    for(int i=0;i<v;i++)
    {
      for(int j=0;j<v;j++)
      {
        if(d[i][k]==inf || d[k][j]==inf) continue;
        d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
      }
    }
  }
}

int main(void)
{
  cin >> v >> e;
  for(int i=0;i<maxn+5;i++)
  {
    for(int j=0;j<maxn+5;j++)
    {
      if(i==j) d[i][j]=0;
      else d[i][j]=inf;
    }
  }
  for(int i=0;i<e;i++)
  {
    int s,t,cost;
    cin >> s >> t >> cost;
    d[s][t]=cost;
  }
  floyd();
  bool nega=false;
  for(int i=0;i<v;i++)
  {
    if(d[i][i]<0)
    {
      nega=true;
    }
  }
  if(nega)
  {
    cout << "NEGATIVE CYCLE" << endl;
  }
  else
  {
    for(int i=0;i<v;i++)
    {
      for(int j=0;j<v;j++)
      {
        if(d[i][j]==inf) cout << "INF";
        else cout << d[i][j];
        if(j!=v-1) cout << ' ';
      }
      cout << endl;
    }
  }
}
