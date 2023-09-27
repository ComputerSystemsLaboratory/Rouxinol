#include <iostream>
#include <vector>
#include <numeric>
#include <cassert>
#include <queue>

const int MAXINT = 1000;

void bfs(std::vector<std::vector<int> >& adj_list, std::vector<int>& d, int root = 0 ){
  std::queue<int> target_q;
  // std::queue<int> dist_q;
  target_q.push(root);
  d[root] = 0;
  // dist_q.push(0;)
  while(!target_q.empty()){
    int vtx = target_q.front(); target_q.pop();
    for(int const&  u : adj_list[vtx]){
      if(d[vtx] + 1 < d[u]){
      target_q.push(u);
        // std::cout<< "/* message */" << std::endl;
        d[u] = d[vtx] + 1;
      }
    }
  }
}


int main(int argc, char const *argv[]) {
  int n; // .. 100
  std::cin >> n;
  std::vector<std::vector<int> > adj_list(n);
  std::vector<int> d(n, MAXINT);

  for(int q=0; q<n; ++q){
    int i_plus_1, k;
    std::cin >> i_plus_1;
    std::cin >> k;
    for(int p=0; p<k; ++p){
      int j_plus_1;
      std::cin >> j_plus_1;
      // adj[i_plus_1-1][j_plus_1-1] = true;
      adj_list[i_plus_1 - 1].push_back(j_plus_1-1);
    }
  }
  bfs(adj_list, d, 0);

  for(int i=0; i<n; ++i){

    // if(d[i] < MAXINT){
      std::cout << (i+1)
        << " " << (d[i]==MAXINT ? -1 : d[i])
        << std::endl;
  }


  // for(auto it = adj_list.begin(); it != adj_list.end(); ++it){
  //   std::cout << ": ";
  //   for(auto jt = (*it).begin(); jt != (*it).end(); ++jt){
  //     std::cout << (*jt) << ' ';
  //   }
  //   std::cout << std::endl;
  // }

  return 0;
}