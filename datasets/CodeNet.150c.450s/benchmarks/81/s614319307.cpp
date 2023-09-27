#include <iostream>
#include <queue>
#include <vector>
#include <utility>
#define INF 10000000
using namespace std;
typedef pair<int,int> p;
struct edge{
  int to,cost;
};
vector<edge> V[10];
int d[10];

void dijkstra(int s) {
  priority_queue< p,vector<p>,greater<p> > que;
  for(int i=0;i<10;i++) {
    d[i] = INF;
  }
  d[s] = 0;
  que.push(p(0,s));

  while(!que.empty()) {
    p v = que.top();que.pop();
    int x = v.second;
    if(d[x] < v.first) continue;
    for(unsigned int i=0;i<V[x].size();i++) {
      edge e = V[x][i];
      if(d[e.to] > d[x] + e.cost) {
	d[e.to] = d[x] + e.cost;
	que.push(p(d[e.to], e.to));
      }
    }
  }
}

int main() {
  int n,sum=0;

  while(cin >> n) {
    if(n == 0) break;
    for(int i=0;i<10;i++) {
      V[i].clear();
    }
    for(int i=0;i<n;i++) {
      int a,b,c;
      edge es;
      cin >> a >> b >> c;
      es.to = b;
      es.cost = c;
      V[a].push_back(es);
      es.to = a;
      V[b].push_back(es);
    }
    int top = INF,topnum = 0;
    for(int i=0;i<10;i++) {
      dijkstra(i);
      for(int j=0;j<10;j++) {
	if(d[j] != INF) {
	  sum += d[j];
	}
      }
   
      if(sum != 0 && sum < top) {
	top = sum;
	topnum = i;
      }
      sum = 0;
    }
    cout << topnum << " " << top << endl;
  }
}