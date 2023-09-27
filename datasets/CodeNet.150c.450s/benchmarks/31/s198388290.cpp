//2???n???200,000
//1???Rt???10

#include <iostream>
#include <vector>
#include <limits>

int main(){
  int N;
  std::vector<int> R;

  std::cin >> N;
  R.resize(N);
  
  for(int i =0; i<N; ++i){
    std::cin >> R[i];
  }
  
  std::vector<int> R_min(N);
  std::vector<int> R_max(N);
  
  R_min[0] = R[0];
  R_max[N-1] = R[N-1];
  
  for(int i=1; i<N; ++i){
    R_min[i] = std::min(R[i], R_min[i-1]);
  }
  for(int i=N-2; i>=0; --i){
    R_max[i] = std::max(R[i], R_max[i+1]);
  }

  // for(int i=0; i<N; ++i){
  //   std::cout << R[i] << ' ';
  // }
  // std::cout << std::endl;
  // for(int i=0; i<N; ++i){
  //   std::cout << R_min[i] << ' ';
  // }
  // std::cout << std::endl;
  // for(int i=0; i<N; ++i){
  //   std::cout << R_max[i] << ' ';
  // }
  // std::cout << std::endl;
  
  int max_diff = std::numeric_limits<int>::min();
  // for(int i=0; i<N; ++i){
  //   max_diff = std::max(max_diff, R_max[i] - R_min[i]);
  // }
  for(int i=0; i<N-1; ++i){
    max_diff = std::max(max_diff, R_max[i+1] - R_min[i]);
  }

  std::cout << max_diff << std::endl;
}