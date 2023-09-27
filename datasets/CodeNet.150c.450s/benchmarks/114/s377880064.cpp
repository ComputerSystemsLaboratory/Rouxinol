#include <cstdio>
#include <vector>
#include <map>
#include <algorithm>

#define rep(i, n) for(int i = 0; i < (n); ++i)

using namespace std;

int n;
int g[100][100];

vector<pair<int, int> > computeSpanningTree(std::vector<pair<int, pair<int, int> > >& edges){
  class UnionFind{
  public:
    UnionFind(int n){
      for(int i = 0; i < n; ++i){
        parent.push_back(i);
      }
      rank.resize(n, 0);
    }

    bool same(int a, int b){
      return find(a) == find(b);
    }

    void unite(int a, int b){
      int p = find(a), q = find(b);

      // assume that p != q

      if(rank[p] > rank[q]){
        parent[q] = p;
      }
      else{
        parent[p] = q;
        
        if(rank[p] == rank[q]){
          ++rank[q];
        }
      }
    }

  private:
    int find(int a){
      return a == parent[a] ? a : parent[a] = find(parent[a]);
    }

  private:
    vector<int> parent, rank;
  };

  class Indexer{
  public:
    int add(int p){
      if(indexer.find(p) == indexer.end()){
        int new_id = indexer.size();
        indexer[p] = new_id;
      }
      return indexer[p];
    }

  private:
    std::map<int, int> indexer;
  };

  sort(edges.begin(), edges.end());

  Indexer id;
  UnionFind uf(edges.size() * 2);

  vector<pair<int, int> > result;
  for(int i = 0; i < edges.size(); ++i){
    int from = edges[i].second.first;
    int to = edges[i].second.second;

    int a = id.add(from);
    int b = id.add(to);

    if(!uf.same(a, b)){
      result.push_back(make_pair(from, to));
      uf.unite(a, b);
    }
  }

  return result;
}

int main(){
	scanf("%d", &n);
	rep(i, n){
		rep(j, n){
			scanf("%d", &g[i][j]);
		}
	}

	std::vector<pair<int, pair<int, int> > > gr;
	rep(i, n){
		for(int j = i; j < n; ++j){
			if(g[i][j] != -1){
				gr.push_back(make_pair(g[i][j], make_pair(i, j)));
			}
		}
	}
	vector<pair<int, int> > edge = computeSpanningTree(gr);
	int s = 0;
	rep(i, edge.size()){
		s += g[edge[i].first][edge[i].second];
	}
	printf("%d\n", s);
	return 0;
}