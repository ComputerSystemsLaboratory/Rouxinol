#include<cstdio>
#include<cstdlib>
#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>
#include<queue>
#include<string>
#include<cmath>
//#include<>
using namespace std;

typedef pair<int,int> Node;
typedef long long ll;
#define rep(i,j) for(i=0;i<j;i++)
#define rev_rep(i,j) for(i=j;i>=0;i—-)

int INF=1<<30;
class Dijkstra
{
public:
  typedef struct Edge{int to,cost;}Edge;
  vector< vector<Edge> > Graph;//接続リスト

  Dijkstra(int n)
  {
    vector<Edge> temp;
    Graph.resize(n,temp);
  }

  void add_arc(int x,int y,int c)
  {
    Edge e={y,c};
    Graph[x].push_back(e);
  }

  vector<int> get_distance(int s)
  {
    priority_queue< Node ,vector<Node>,greater<Node> > que;//(sからの距離,インデックス)
    vector<int>ans;
    int i;
    ans.resize(Graph.size(),INF);
    ans[s]=0;
    que.push(Node(0,s));
    while(!que.empty()){
      Node now=que.top();que.pop();
      int now_i=now.second;
      //nowへの最小距離でないならスキップ
      if(ans[now_i]<now.first)continue;
      //nowからの辺全てをみる
      rep(i,Graph[now_i].size()){
	Edge e=Graph[now_i][i];
	//nowから行った方が近かったら更新
	if(ans[e.to]>ans[now_i]+e.cost){
	  ans[e.to]=ans[now_i]+e.cost;
	  que.push(Node(ans[e.to],e.to));
	}
      }
    }
    return ans;
  }

};

int main()
{
  int n,m,r;
  cin>>n>>m>>r;
  Dijkstra map(n);
  int i;
  rep(i,m)
    {
      int a,b,c;
      cin>>a>>b>>c;
      map.add_arc(a,b,c);
      //map.add_arc(b,a,c);
    }
  vector<int> ans=map.get_distance(r);
  rep(i,ans.size())
    if(ans[i]==INF)
      cout<<"INF"<<endl;
    else 
      cout<<ans[i]<<endl;
  return 0;
}