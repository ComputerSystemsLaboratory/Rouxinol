#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int P[10010];
void init(int N);
int root(int a);
bool is_same_set(int a,int b);
void unite(int a,int b);

struct Node {
  int cost,start,goal;
  bool operator<( const Node& right ) const {
    return cost == right.cost ? start < right.start : cost < right.cost;
  }
};

vector<Node> Nodes;

int main() {
  int N;
  cin >> N;
  for (int i=0;i<N;++i) {
    for (int j=0;j<N;++j) {
      int buf;
      cin >> buf;
      if (buf!=-1) {
	Node bufNode = {buf,i,j};
	Nodes.push_back(bufNode);
      }
    }
  }
  sort(Nodes.begin(),Nodes.end());
  init(N); int totalCost = 0;
  for (int i=0;i<Nodes.size();++i) {
    if (is_same_set(Nodes[i].start,Nodes[i].goal)==false) {
      unite(Nodes[i].start,Nodes[i].goal);
      totalCost += Nodes[i].cost;
    }
  }
  cout << totalCost << endl;
}

void init(int N) {
  for (int i=0;i<=N;++i) P[i] = i;
}

int root(int a) {
  if (P[a] == a) return a;
  return (P[a] = root(P[a]));
}

bool is_same_set(int a,int b) {
  return root(a)==root(b);
}

void unite(int a,int b) {
  P[root(a)] = root(b);
}