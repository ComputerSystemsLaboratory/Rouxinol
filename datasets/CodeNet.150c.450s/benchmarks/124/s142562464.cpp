#include <iostream>
#include <vector>
#include <queue>
#define INF 1000000
using namespace std;

class vertex{
public:
  class edge{
  public:
    int to;
    int weight;
    edge(int to, int weight){
      this->to = to;
      this->weight = weight;
    }
  };

  vector<edge> edges;
  int num;
  int dis;

  vertex(){
    n++;
    vertexes.push_back(this);
  }

  bool operator< (const vertex& v) const{
    return dis < v.dis;
  }

  bool operator> (const vertex& v) const{
    return dis > v.dis;
  }

  static void dijkstra(int start){
    //距離の初期化
    for(int i=0; i<n; i++) vertexes[i]->dis=INF;
    vertexes[start]->dis=0;

    //プライオリティキューを初期化、始点を格納
    priority_queue<vertex, vector<vertex>, greater<vertex> > pq; pq.push(*vertexes[start]);


    while(!pq.empty()){
      vertex now = pq.top(); pq.pop(); //キューの先頭をポップ
      if(now.dis>vertexes[now.num]->dis) continue;

      //ポップしたキューの頂点集合について最短距離更新
      for(int i=0; i<now.edges.size(); i++){
        int newDis = now.dis+now.edges[i].weight;
        vertex* next = vertexes[now.edges[i].to];
        if(newDis < next->dis){
          next->dis = newDis;
          pq.push(*next);
        }
      }

    }


  }

  static void print(){
    for(int i=0; i<n; i++){
      cout << vertexes[i]->num << " " << vertexes[i]->dis << endl;
    }
  }
private:
  static int n;
  static vector<vertex*> vertexes;
};

int vertex::n=0;
vector<vertex*> vertex::vertexes;

int main(){
  int n; cin >> n;

  vertex graph[n];

  //入力を隣接リストのようなものに格納
  int v, k, to, weight;
  for(int i=0; i<n; i++){
    cin >> v >> k;
    graph[i].num=v;
    for(int j=0; j<k; j++){
      cin >> to >> weight;
      vertex::edge e(to, weight);
      graph[v].edges.push_back(e);
    }
  }

  vertex::dijkstra(0); //0始点のダイクストラ法

  vertex::print();

  return 0;
}

