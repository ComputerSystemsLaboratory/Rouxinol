#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> pii;
typedef vector<int> vec;
typedef unordered_map<int,int> hash;
#define long long long
#define pb push_back
#define all(a) (a).begin(), (a).end()
#define sz(x) (int)x.size()
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define fill(a,v) memset(a,v,sizeof(a))
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define INF 0x3f3f3f3f//infinity for integers
#define JJ ios_base::sync_with_stdio(0); cin.tie(0)//input fast
#define MOD 1000000007
class Graph{
	public:
		int v;
		list<int>*l;

		Graph(int V){
			v=V;
			// map<int,list<int>>l[v];
			l = new list<int>[v+1];

			
		}
	
	void addEdge(int x, int y){
	l[x].push_back(y);
	l[y].push_back(x);
	}
	void bfs(int src){
		queue<int>q;
		bool *visited=new bool[v+1];
		vector<int>path(v+1);
		FOR(i,0,v+1)
		visited[i]=false;
		q.push(src);
		visited[src]=true;
		while(!q.empty()){
			int f=q.front();
			// cout<<" q front "<<f<<endl;
			q.pop();
			// list<int>::iterator i;
			for(auto i=l[f].begin();i!=l[f].end();i++){
				if(!visited[*i])
				{
					q.push(*i);
					// cout<<"pushed "<<*i<<endl;
					visited[*i]=true;
					path[*i]=f;
					// cout<<"path of "<<*i<<"is "<<f<<endl;
				}
			}
		}
		// cout<<"map printing"<<endl;
      if(l[1].begin()==l[1].end())
        cout<<"No"<<endl;
      else{
        cout<<"Yes"<<endl;
		for(int i=2;i<path.size();i++){
			cout<<path[i]<<endl;
		}
      }


	}
};

int main()
{
	JJ;
	int v,m; cin>>v>>m;
	Graph g(v);
	int x,y;

	FOR(i,0,m){
		cin>>x>>y;
		g.addEdge(x,y);
		// cout<<x<<" and "<<y<<endl;
	}
	g.bfs(1);

	


	return 0;
}
