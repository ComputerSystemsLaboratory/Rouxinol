#include <iostream>
#include <vector>
#include <queue>
#include <tuple>

int main(int argc, char const *argv[]) {
  int n;
  std::vector<std::vector<int> > a;
  std::cin >> n; // .. 100
  a = std::vector<std::vector<int> >(n, std::vector<int>(n));
  // a_ij <= 2000, a_ij = a_ji, this graph is connected;

  for (size_t i = 0; i < n; i++) {
    for (size_t j = 0; j < n; j++) {
      std::cin >> a[i][j];
    }
  }

  //ALGORITHM
  std::vector<bool> found_vtx(n, false);
  // std::tuple<int,int,int> x(1,2,3);
  std::priority_queue<
    std::tuple<int,int,int>,
    std::vector<std::tuple<int, int, int> >,
    std::greater<std::tuple<int, int, int> >
  > q;

  int new_elm = 0;
  found_vtx[new_elm] = true;
  for (size_t i = 0; i < n; i++) {
    q.push(std::make_tuple(a[new_elm][i], new_elm, i));
  }
  int mst_weight = 0;
  while(!q.empty()){
    auto x = q.top(); q.pop();
    // std::cout << "e: "
    //   << std::get<0>(x) << " "
    //   << std::get<1>(x) << " "
    //   << std::get<2>(x) << std::endl;
    if(found_vtx[std::get<2>(x)] || std::get<0>(x) < 0) continue;
    else{
      mst_weight += std::get<0>(x);
      // std::cout << std::get<0>(x) << std::endl;
      new_elm = std::get<2>(x);
      found_vtx[new_elm] = true;
      for (size_t i = 0; i < n; i++) {
        q.push(std::make_tuple(a[new_elm][i], new_elm, i));
      }
    }
  }

  std::cout << mst_weight << std::endl;
  return 0;
}