#include <iostream>
#include <vector>
#include <queue>
#include <fstream>
#include <climits>
#define INF INT_MAX
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
    num=n;
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

    //キューから最短距離を取り出していく
    while(!pq.empty()){
      vertex now = pq.top(); pq.pop(); //キューの先頭をポップ
      if(now.dis>vertexes[now.num]->dis) continue;

      //ポップしたキューの頂点集合について最短距離更新
      for(int i=0; i<now.edges.size(); i++){
        int newDis = now.dis+now.edges[i].weight;
        vertex* next = vertexes[now.edges[i].to];

        //もし最短距離が更新されたら、キューに入れなおす
        if(newDis < next->dis){
          next->dis = newDis;
          pq.push(*next);
        }
      }

    }


  }

  //各頂点番号と最短距離を出力するための関数
  static void print(){
    for(int i=0; i<n; i++){
      if(vertexes[i]->dis==INF){
        cout << "INF" << endl;
      }else{
        cout << vertexes[i]->dis << endl;
      }
    }
  }
private:
  static int n;
  static vector<vertex*> vertexes;
};

//staticメンバ変数の初期化
int vertex::n=0;
vector<vertex*> vertex::vertexes;

int main(){
  int n, e, r; cin >> n >> e >> r;

  vertex graph[n];

  //入力を隣接リストのようなものに格納
  int v, to, weight;
  for(int i=0; i<e; i++){
    cin >> v >> to >> weight;

    vertex::edge e(to, weight);
    graph[v].edges.push_back(e);
  }

  vertex::dijkstra(r); //0始点のダイクストラ法

  vertex::print();

  return 0;
}

